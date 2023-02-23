// Fill out your copyright notice in the Description page of Project Settings.


#include "ReversiTile.h"
#include "ReversiGameModeBase.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/ConstructorHelpers.h"
#include "Particles/ParticleSystemComponent.h"

// Sets default values
AReversiTile::AReversiTile()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Box Component
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetupAttachment(RootComponent);
	BoxComponent->SetCollisionProfileName(TEXT("Vehicle"));
	//BoxComponent->bHiddenInGame = false;    // Debug: Show box ingame
	BoxComponent->OnClicked.AddDynamic(this, &AReversiTile::TileClicked);

	Tile = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh>TileMesh(TEXT("StaticMesh'/Game/Reversi/Mesh/Shape_Cube.Shape_Cube'"));
	if (TileMesh.Succeeded())
	{
		Tile->SetStaticMesh(TileMesh.Object);
	}

	ConstructorHelpers::FObjectFinder<UMaterial>TileMaterial(TEXT("Material'/Game/Reversi/Materials/M_Wood_Oak.M_Wood_Oak'"));
	if (TileMaterial.Succeeded())
	{
		Tile->SetMaterial(0, TileMaterial.Object);
	}
	Tile->SetupAttachment(BoxComponent);
	Tile->SetRelativeScale3D(FVector(0.65f, 0.65f, 0.1f));
	Tile->SetRelativeLocation(FVector(0.f, 0.f, -30.f));

	Disc = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DiscMesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh>DiscMesh(TEXT("StaticMesh'/Game/Reversi/Mesh/Shape_Sphere.Shape_Sphere'"));
	if (DiscMesh.Succeeded())
	{
		Disc->SetStaticMesh(DiscMesh.Object);
	}
	Disc->SetupAttachment(Tile);
	Disc->SetRelativeScale3D(FVector(0.8f, 0.8f, 2.f));
	Disc->SetRelativeLocation(FVector(0.f, 0.f, 100.f));

	ConstructorHelpers::FObjectFinder<UMaterial>WDisc(TEXT("Material'/Game/Reversi/Materials/M_White_Disc.M_White_Disc'"));
	ConstructorHelpers::FObjectFinder<UMaterial>BDisc(TEXT("Material'/Game/Reversi/Materials/M_Black_Disc.M_Black_Disc'"));
	if (WDisc.Succeeded() && BDisc.Succeeded())
	{
		WhiteDisc = WDisc.Object;
		BlackDisc = BDisc.Object;
	}
	Disc->SetVisibility(false);
	InitRot = Disc->GetRelativeRotation();

	// Particle system
	PrevMoveParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PrevMoveParticles"));
	PrevMoveParticleSystem->SetupAttachment(Tile);
	PrevMoveParticleSystem->bAutoActivate = false;
	PrevMoveParticleSystem->SetRelativeLocation(FVector(0.0f, 0.0f, 150.0f));
	PrevMoveParticleSystem->SetRelativeScale3D(FVector(1.f));
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset1(TEXT("ParticleSystem'/Game/Reversi/Particles/P_Fire.P_Fire'"));
	if (ParticleAsset1.Succeeded())
	{
		PrevMoveParticleSystem->SetTemplate(ParticleAsset1.Object);
	}
}

// Called when the game starts or when spawned
void AReversiTile::BeginPlay()
{
	Super::BeginPlay();

	GM = (AReversiGameModeBase*)GetWorld()->GetAuthGameMode();
	if (!GM) { return; }
}

/*******************************************************************************
*
* Check valid move
*
********************************************************************************/
void AReversiTile::PlayerMove()
{
	CheckValidMove();

	if (AllHitTarget.Num() > 0)
	{
		if (GM->GetTurn() == 0)
		{
			PlaceDisc();
		}
	}
}

void AReversiTile::CheckValidMove()
{
	AllHitTarget.Empty();
	TArray<FHitResult> BoxHit;
	UKismetSystemLibrary::BoxTraceMultiByProfile(GetWorld(), GetActorLocation(), GetActorLocation(), FVector(80.f), FRotator(0.f), TEXT("Pawn"), true, { this }, EDrawDebugTrace::None, BoxHit, true);

	if (BoxHit.Num() > 0)
	{
		for (int8 i = 0; i < 8; i++)
		{
			TArray<FHitResult> LineHit;
			FHitResult LineToEmptyTileHit;
			SetTraceProfile();
			FVector End = GetLineTraceEnd(i);

			UKismetSystemLibrary::LineTraceMultiByProfile(GetWorld(), GetActorLocation(), End, TraceProfile, true, { this }, EDrawDebugTrace::None, LineHit, true);

			// Line trace to check if there is empty space 
			UKismetSystemLibrary::LineTraceSingleByProfile(GetWorld(), GetActorLocation(), End, TEXT("Vehicle"), true, { this }, EDrawDebugTrace::None, LineToEmptyTileHit, true);

			if (LineHit.Num() > 1 && FHitResult::GetNumBlockingHits(LineHit) == 1)
			{
				float Dist = FVector::Distance(GetActorLocation(), LineHit[LineHit.Num() - 1].Location);
				float DistToEmpty;
				if (LineToEmptyTileHit.Actor.IsValid())
				{
					DistToEmpty = FVector::Distance(GetActorLocation(), LineToEmptyTileHit.Location);
				}
				else
				{
					DistToEmpty = Length;
				}

				if (Dist < DistToEmpty)
				{
					for (const auto& Hit : LineHit)
					{
						if (!Hit.IsValidBlockingHit())
						{
							AllHitTarget.Add(Hit);
						}
					}
				}
			}
		}
	}
}

/*******************************************************************************
*
* Get collision profile and end position for line trace
*
********************************************************************************/
void AReversiTile::SetTraceProfile()
{
	if (GM->GetTurn() == 0)
	{
		TraceProfile = TEXT("Pawn");
	}
	else
	{
		TraceProfile = TEXT("PhysicsActor");
	}
}

FVector AReversiTile::GetLineTraceEnd(int8 Index)
{
	float DesX = 0;
	float DesY = 0;
	switch (Index)
	{
	case 0:
		DesX = Length;
		DesY = 0.f;
		break;
	case 1:
		DesX = Length;
		DesY = Length;
		break;
	case 2:
		DesX = 0.f;
		DesY = Length;
		break;
	case 3:
		DesX = -Length;
		DesY = Length;
		break;
	case 4:
		DesX = -Length;
		DesY = 0.f;
		break;
	case 5:
		DesX = -Length;
		DesY = -Length;
		break;
	case 6:
		DesX = 0.f;
		DesY = -Length;
		break;
	case 7:
		DesX = Length;
		DesY = -Length;
		break;
	}

	return FVector(GetActorLocation().X + DesX, GetActorLocation().Y + DesY, GetActorLocation().Z);
}

/*******************************************************************************
*
* Place discs
*
********************************************************************************/
void AReversiTile::PlaceDisc()
{
	if (!GM->GetIsEnd())
	{
		EndTurn = true;
		if (GM->GetTurn() == 0)
		{
			PlaceWhiteDisc();
		}
		else
		{
			PlaceBlackDisc();
		}
		PlayParticleSystem();
		if (GM->GetPrevTile())
		{
			GM->GetPrevTile()->PlayParticleSystem();
		}
		GM->SetPrevTile(this);
		UpdateDiscs();
	}
}

void AReversiTile::PlaceWhiteDisc()
{
	BoxComponent->SetCollisionProfileName(TEXT("Pawn"));
	Disc->SetMaterial(0, WhiteDisc);
	Disc->SetVisibility(true);
	IsPlaced = true;
}

void AReversiTile::PlaceBlackDisc()
{
	BoxComponent->SetCollisionProfileName(TEXT("PhysicsActor"));
	Disc->SetMaterial(0, BlackDisc);
	Disc->SetVisibility(true);
	IsPlaced = true;
}

/*******************************************************************************
*
* Update all discs in the complete paths after a new move.
*
********************************************************************************/
void AReversiTile::UpdateDiscs()
{
	for (const auto& Hit : AllHitTarget)
	{
		AReversiTile* TileTarget = Cast<AReversiTile>(Hit.Actor.Get());
		if (TileTarget)
		{
			if (GM->GetTurn() == 0)
			{
				TileTarget->PlaceWhiteDisc();
			}
			else
			{
				TileTarget->PlaceBlackDisc();
			}
			TileTarget->CastAnimation();
		}
	}
	GetWorldTimerManager().SetTimer(StopAnimTimer, this, &AReversiTile::StopAnimation, 2.f, true, 0.f);
}

/*******************************************************************************
*
* Get the size of AllHitTarget array
*
********************************************************************************/
int32 AReversiTile::GetNumOfHit()
{
	return AllHitTarget.Num();
}


/*******************************************************************************
*
* Trigger OnClicked
*
********************************************************************************/
void AReversiTile::TileClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked)
{
	if (!IsPlaced && !EndTurn)
	{
		PlayerMove();
	}
}

/*******************************************************************************
*
* Flip Animation
*
********************************************************************************/

void AReversiTile::CastAnimation()
{
	IsFlipped = false;
	GetWorldTimerManager().SetTimer(FlipTimer, this, &AReversiTile::FlipAnimation, 0.01f, true, 0.f);
}

void AReversiTile::FlipAnimation()
{
	if (!IsFlipped)
	{
		Counter++;
		if (Counter <= 50)
		{
			Disc->SetRelativeLocation(FVector(Disc->GetRelativeLocation().X, Disc->GetRelativeLocation().Y, Disc->GetRelativeLocation().Z + 10.f));
		}
		else
		{
			Disc->SetRelativeLocation(FVector(Disc->GetRelativeLocation().X, Disc->GetRelativeLocation().Y, Disc->GetRelativeLocation().Z - 10.f));
		}
		Disc->SetRelativeRotation(FRotator(Disc->GetRelativeRotation().Pitch, Disc->GetRelativeRotation().Roll + 3.6f, Disc->GetRelativeRotation().Yaw));
	}
	if (Counter > 100)
	{
		IsFlipped = true;
		Counter = 0;
		Disc->SetRelativeRotation(InitRot);
		Disc->SetRelativeLocation(FVector(0.f, 0.f, 100.f));
	}
}

void AReversiTile::StopAnimation()
{
	GetWorldTimerManager().ClearTimer(FlipTimer);
	GetWorldTimerManager().ClearTimer(StopAnimTimer);
	GM->UpdateTurn();
	EndTurn = false;
}

void AReversiTile::PlayParticleSystem()
{
	if (PrevMoveParticleSystem && PrevMoveParticleSystem->Template)
	{
		PrevMoveParticleSystem->ToggleActive();
	}
}
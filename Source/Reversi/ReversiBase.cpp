// Fill out your copyright notice in the Description page of Project Settings.


#include "ReversiBase.h"
#include "ReversiTile.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Camera/CameraComponent.h"
#include "Engine/EngineTypes.h"

// Sets default values
AReversiBase::AReversiBase()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
		Set up game board
		The default board size is 400.f x 400.f
	*/
	BoardBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoardBase"));
	BoardBase->SetupAttachment(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh>BaseMesh(TEXT("StaticMesh'/Game/Reversi/Mesh/Floor_400x400.Floor_400x400'"));
	if (BaseMesh.Succeeded())
	{
		BoardBase->SetStaticMesh(BaseMesh.Object);
	}

	ConstructorHelpers::FObjectFinder<UMaterial>BaseMaterial(TEXT("Material'/Game/Reversi/Materials/M_Wood_Walnut.M_Wood_Walnut'"));
	if (BaseMaterial.Succeeded())
	{
		BoardBase->SetMaterial(0, BaseMaterial.Object);
	}

	UpdateBoard();

	//RAI = CreateDefaultSubobject<AReversiAI>(TEXT("AIPlayer"));
}

// Called when the game starts or when spawned
void AReversiBase::BeginPlay()
{
	Super::BeginPlay();

	int32 NumOfTiles = Size * Size;
	int32 LowerRight = Size * (Size / 2) + (Size / 2); // get 4 centered tiles
	int32 LowerLeft = LowerRight - 1;
	int32 UpperRight = LowerRight - Size;
	int32 UpperLeft = LowerLeft - Size;

	// Make a board
	for (int32 i = 0; i < NumOfTiles; i++)
	{
		const float XOffset = (i / Size) * TileSpacing + BoardPadding; // Divide by dimension
		const float YOffset = (i % Size) * TileSpacing + BoardPadding; // Modulo gives remainder

		// Make position vector, offset from Grid location
		const FVector TileLocation = FVector(XOffset, YOffset, 35.f);

		AReversiTile* Tile = GetWorld()->SpawnActor<AReversiTile>(TileLocation, FRotator(0.f));
		if (Tile)
		{
			if (i == LowerRight || i == UpperLeft)
			{
				Tile->PlaceWhiteDisc();
			}
			else if (i == UpperRight || i == LowerLeft)
			{
				Tile->PlaceBlackDisc();
			}
		}
	}
}

// Called every frame
void AReversiBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	DiscCounter();
}

// Called to bind functionality to input
void AReversiBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AReversiBase::UpdateBoard()
{
	// Set default
	Size = 8;
	TileSpacing = 80.f;
	BoardPadding = 90.f;
	ScaleValue = (Size * TileSpacing + BoardPadding) / 400.f;
	CamHeight = 200 * ScaleValue + 50.f;

	// Update board
	BoardBase->SetRelativeScale3D(FVector(ScaleValue, ScaleValue, 2.f));
	BoardBase->SetRelativeRotation(FRotator(0.f));
	BoardBase->SetRelativeLocation(FVector(0.f));

	/*
		Set up the top down camera
		The height depend on the board size. For example, the board size is 8x8.
		Each tile is 20.f. The whole board will be around 200.f. Then the height
		of the camera will be 200.f + 10.f offset.
	*/
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(BoardBase);
	Camera->SetRelativeRotation(FRotator(-90.f, -90.f, 0.f));
	Camera->SetRelativeLocation(FVector(200.f, 200.f, CamHeight));
}

void AReversiBase::DiscCounter()
{
	NumOfWhite = 0;
	NumOfBlack = 0;
	TArray<FHitResult>BoxHit;
	FVector Location = FVector((GetActorLocation().X + Size / 2.f) * 100.f, (GetActorLocation().Y + Size / 2.f) * 100.f, GetActorLocation().Z);

	// Cast a box trace to count disc
	UKismetSystemLibrary::BoxTraceMultiByProfile(GetWorld(), Location, Location, FVector(Size * 50.f), FRotator(0.f), TEXT("Pawn"), true, {}, EDrawDebugTrace::None, BoxHit, true);

	NumOfWhite = FHitResult::GetNumBlockingHits(BoxHit);
	NumOfBlack = FHitResult::GetNumOverlapHits(BoxHit);
}


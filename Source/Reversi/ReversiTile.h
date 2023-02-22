// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ReversiTile.generated.h"

UCLASS()
class REVERSI_API AReversiTile : public APawn
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly)
	class UStaticMeshComponent* Tile;

	UPROPERTY(VisibleDefaultsOnly)
	class UStaticMeshComponent* Disc;

	UPROPERTY(VisibleDefaultsOnly)
	class UBoxComponent* BoxComponent;

public:
	// Sets default values for this pawn's properties
	AReversiTile();

	UFUNCTION()
	void TileClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void PlayerMove();
	void CheckValidMove();
	void SetTraceProfile();
	FVector GetLineTraceEnd(int8 index);
	void PlaceDisc();
	void PlaceWhiteDisc();
	void PlaceBlackDisc();
	void UpdateDiscs();
	int32 GetNumOfHit();

	// Animation
	void CastAnim();
	void FlipAnimation();

private:
	class AReversiGameModeBase* GM;
	class UMaterial* WhiteDisc;
	class UMaterial* BlackDisc;
	bool IsPlaced = false;
	FName TraceProfile;
	TArray<FHitResult>AllHitTarget;

	// Animation
	bool IsFlipped = false;
	int8 Counter = 0;
	float FlipTimeCounter = 0.f;
	FTimerHandle FlipTimer;
};

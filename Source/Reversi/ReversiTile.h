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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void CheckMove();
	void SetTraceProfile();
	FVector GetLineTraceEnd(int8 index);
	void PlaceDisc();
	void PlaceWhiteDisc();
	void PlaceBlackDisc();
	void UpdateDiscs();

	UFUNCTION()
		void TileClicked(UPrimitiveComponent* ClickedComp, FKey ButtonClicked);

private:
	class AReversiGameModeBase* GM;
	class UMaterial* WhiteDisc;
	class UMaterial* BlackDisc;
	bool IsPlaced = false;
	FName TraceProfile;
	TArray<FHitResult>AllHitTarget;

public:
	FORCEINLINE class UStaticMeshComponent* GetDiscMesh() const { return Disc; }
};

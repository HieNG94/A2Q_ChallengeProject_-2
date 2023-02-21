// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ReversiBase.generated.h"

UCLASS()
class REVERSI_API AReversiBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AReversiBase();

	UPROPERTY(VisibleDefaultsOnly)
	class UStaticMeshComponent* BoardBase;

	UPROPERTY(VisibleDefaultsOnly)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Size;

	// Update board size and camera
	UFUNCTION(BlueprintCallable)
	void UpdateBoard(int32 SelectedSize);	

protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void DiscCounter();	// Count Black and White Disc

	/*
	* AI
	*/
	void AIMove();

private:
	class AReversiGameModeBase* GM;

	// Board setting
	float TileSpacing;
	float BoardPadding;
	float ScaleValue;
	float CamHeight;

	// AI
	int32 Gain;
	class AReversiTile* SelectedTile;
};
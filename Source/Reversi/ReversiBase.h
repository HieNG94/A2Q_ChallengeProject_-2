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

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 NumOfWhite;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int32 NumOfBlack;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Update board size and camera
	void UpdateBoard();

	// Count Black and White Disc
	void DiscCounter();

private:
	int32 Size;
	float TileSpacing;
	float BoardPadding;
	float ScaleValue;
	float CamHeight;
};

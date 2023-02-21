// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ReversiStartMenu.generated.h"

UCLASS()
class REVERSI_API AReversiStartMenu : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AReversiStartMenu();

	UPROPERTY(VisibleDefaultsOnly)
	class UStaticMeshComponent* MenuBoard;

	UPROPERTY(VisibleDefaultsOnly)
	class UCameraComponent* MenuCamera;
};

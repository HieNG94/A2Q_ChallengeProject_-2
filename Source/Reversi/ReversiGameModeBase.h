// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ReversiGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class REVERSI_API AReversiGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AReversiGameModeBase();

public:
	void UpdateTurn();
	int8 GetTurn();

private:
	int8 Turn = 0;
};

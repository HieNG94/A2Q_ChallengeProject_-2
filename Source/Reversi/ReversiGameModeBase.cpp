// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReversiPlayerController.h"
#include "ReversiBase.h"
#include "ReversiGameModeBase.h"

AReversiGameModeBase::AReversiGameModeBase()
{
	// Set default player controller
	PlayerControllerClass = AReversiPlayerController::StaticClass();

	DefaultPawnClass = AReversiBase::StaticClass();
}

void AReversiGameModeBase::UpdateTurn()
{
	if (Turn == 0)
	{
		Turn = 1;
	}
	else
	{
		Turn = 0;
	}
}

int8 AReversiGameModeBase::GetTurn()
{
	return Turn;
}

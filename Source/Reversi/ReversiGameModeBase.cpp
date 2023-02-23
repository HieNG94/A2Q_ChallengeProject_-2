// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReversiPlayerController.h"
#include "ReversiBase.h"
#include "ReversiTile.h"
#include "ReversiStartMenu.h"
#include "ReversiGameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AReversiGameModeBase::AReversiGameModeBase()
{
	// Set default player controller
	PlayerControllerClass = AReversiPlayerController::StaticClass();

	DefaultPawnClass = AReversiStartMenu::StaticClass();
}

void AReversiGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (StartingWidgetClass)
	{
		ChangeMenuWidget(StartingWidgetClass);
	}
}

/*******************************************************************************
*
* Change Widget
*
********************************************************************************/
void AReversiGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass)
{
	if (CurrentWidget != nullptr)
	{
		CurrentWidget->RemoveFromViewport();
		CurrentWidget = nullptr;
	}
	if (NewWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), NewWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void AReversiGameModeBase::GetGameBoard()
{
	TArray<AActor*> FoundActor;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AReversiBase::StaticClass(), FoundActor);

	if (FoundActor.Num() > 0)
	{
		Board = Cast<AReversiBase>(FoundActor[0]);

		if (!Board) { return; }
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Cannot find game board!!!"));
		return;
	}
}

void AReversiGameModeBase::UpdateTurn()
{
	// Max timer per turn
	GetWorldTimerManager().SetTimer(TimeLimitPerTurn, this, &AReversiGameModeBase::SwitchTurn, TimeLimit, true, 0.f);

	// The timer display on widget
	GetWorldTimerManager().SetTimer(TimeCounter, this, &AReversiGameModeBase::UpdateWidgetTimer, 0.1, true, 0.f);
}

void AReversiGameModeBase::SwitchTurn()
{
	if(!IsEnd)
	{
		if (Turn == 0)
		{
			Turn = 1;
		}
		else
		{
			Turn = 0;
		}
		Board->DiscCounter();
		GameManager();
		WidgetTimer = TimeLimit;
	}
}

void AReversiGameModeBase::GameManager()
{
	if (BlackDisc == 0 || WhiteDisc == 0)
	{
		EndGame();
	}
	Board->CheckValidMove();
}

int8 AReversiGameModeBase::GetTurn()
{
	return Turn;
}

void AReversiGameModeBase::SetPrevTile(AReversiTile* Tile)
{
	PrevTile = Tile;
}

AReversiTile* AReversiGameModeBase::GetPrevTile()
{
	return PrevTile;
}

void AReversiGameModeBase::SetNumOfBlackDisc(int32 Num)
{
	BlackDisc = Num;
}

void AReversiGameModeBase::SetNumOfWhiteDisc(int32 Num)
{
	WhiteDisc = Num;
}

void AReversiGameModeBase::SetTimeLimit(float Time)
{
	TimeLimit = Time;
	WidgetTimer = Time;
}

void AReversiGameModeBase::UpdateWidgetTimer()
{
	WidgetTimer -= 0.1f;
}

bool AReversiGameModeBase::GetIsEnd()
{
	return IsEnd;
}

void AReversiGameModeBase::EndGame()
{
	IsEnd = true;
	Board->DiscCounter();
	GetWorldTimerManager().ClearTimer(TimeLimitPerTurn);
	GetWorldTimerManager().ClearTimer(TimeCounter);

	if (EndingWidgetClass)
	{
		ChangeMenuWidget(EndingWidgetClass);
	}
}

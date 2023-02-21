// Copyright Epic Games, Inc. All Rights Reserved.

#include "ReversiPlayerController.h"
#include "ReversiBase.h"
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

	if (WidgetClasses.Num() > 0)
	{
		ChangeMenuWidget(WidgetClasses[0]);
	}
}

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

void AReversiGameModeBase::UpdateTurn()
{
	GetWorldTimerManager().SetTimer(TimeLimitPerTurn, this, &AReversiGameModeBase::SwitchTurn, TimeLimit, true, 0.f);
}

void AReversiGameModeBase::SwitchTurn()
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
}

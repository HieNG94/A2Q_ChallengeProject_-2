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

	/** Remove the current menu widget and create a new one from the specified class, if provided. */
	UFUNCTION(BlueprintCallable, Category = "UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

	UPROPERTY(BluePrintReadWrite)
	int32 BlackDisc = 0;

	UPROPERTY(BluePrintReadWrite)
	int32 WhiteDisc = 0;

protected:
	virtual void BeginPlay() override;

	/** The widget class we will use as our menu when the game starts. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TArray<TSubclassOf<UUserWidget>> WidgetClasses;

	/** The widget instance that we are using as our menu. */
	UPROPERTY()
	UUserWidget* CurrentWidget;

public:
	void UpdateTurn();
	void SwitchTurn();
	int8 GetTurn();
	void SetNumOfBlackDisc(int32 Num);
	void SetNumOfWhiteDisc(int32 Num);
	void SetTimeLimit(float Time);

private:
	int8 Turn = 0;
	float TimeLimit = 5.f;
	FTimerHandle TimeLimitPerTurn;
};

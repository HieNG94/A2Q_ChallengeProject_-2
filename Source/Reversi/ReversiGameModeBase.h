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

	UPROPERTY(BluePrintReadWrite)
	float TimeLimit = 0.f;

	UPROPERTY(BluePrintReadWrite)
	float WidgetTimer = 0.f;

	UPROPERTY(BluePrintReadWrite)
	int32 Turn = 0;

	UFUNCTION(BluePrintCallable)
	void GetGameBoard();

	UFUNCTION(BluePrintCallable)
	void SetTimeLimit(float Time);

protected:
	virtual void BeginPlay() override;

	/** The widget class we will use as our menu when the game starts. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget>StartingWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget>EndingWidgetClass;

	/** The widget instance that we are using as our menu. */
	UPROPERTY()
	UUserWidget* CurrentWidget;

public:
	void UpdateTurn();
	void SwitchTurn();
	void GameManager();
	int8 GetTurn();
	void SetPrevTile(class AReversiTile* Tile);
	class AReversiTile* GetPrevTile();
	void SetNumOfBlackDisc(int32 Num);
	void SetNumOfWhiteDisc(int32 Num);
	void UpdateWidgetTimer();
	bool GetIsEnd();
	void EndGame();

private:
	bool IsEnd = false;
	FTimerHandle TimeLimitPerTurn;
	FTimerHandle TimeCounter;
	class AReversiBase* Board;
	class AReversiTile* PrevTile;
};

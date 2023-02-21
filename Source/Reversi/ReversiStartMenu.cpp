// Fill out your copyright notice in the Description page of Project Settings.


#include "ReversiStartMenu.h"
#include "Camera/CameraComponent.h"

// Sets default values
AReversiStartMenu::AReversiStartMenu()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
		Set up menu board
		The default board size is 400.f x 400.f
	*/
	MenuBoard = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoardBoard"));
	MenuBoard->SetupAttachment(RootComponent);

	ConstructorHelpers::FObjectFinder<UStaticMesh>BoardMesh(TEXT("StaticMesh'/Game/Reversi/Mesh/Wall_500x500.Wall_500x500'"));
	if (BoardMesh.Succeeded())
	{
		MenuBoard->SetStaticMesh(BoardMesh.Object);
	}

	ConstructorHelpers::FObjectFinder<UMaterial>BoardMaterial(TEXT("Material'/Game/Reversi/Materials/M_MainMenu_BG.M_MainMenu_BG'"));
	if (BoardMaterial.Succeeded())
	{
		MenuBoard->SetMaterial(0, BoardMaterial.Object);
	}

	MenuCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	MenuCamera->SetupAttachment(MenuBoard);
	MenuCamera->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	MenuCamera->SetRelativeLocation(FVector(50.f));
}
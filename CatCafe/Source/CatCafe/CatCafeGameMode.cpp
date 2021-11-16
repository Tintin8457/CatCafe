// Copyright Epic Games, Inc. All Rights Reserved.

#include "CatCafeGameMode.h"
#include "CatCafePlayerController.h"
#include "CatCafeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACatCafeGameMode::ACatCafeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACatCafePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "SRPGProjectGameMode.h"
#include "SRPGProjectPlayerController.h"
#include "SRPGProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASRPGProjectGameMode::ASRPGProjectGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASRPGProjectPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
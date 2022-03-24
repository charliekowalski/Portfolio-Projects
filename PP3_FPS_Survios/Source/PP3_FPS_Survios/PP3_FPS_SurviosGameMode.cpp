// Copyright Epic Games, Inc. All Rights Reserved.

#include "PP3_FPS_SurviosGameMode.h"
#include "PP3_FPS_SurviosHUD.h"
#include "PP3_FPS_SurviosCharacter.h"
#include "UObject/ConstructorHelpers.h"

APP3_FPS_SurviosGameMode::APP3_FPS_SurviosGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APP3_FPS_SurviosHUD::StaticClass();
}

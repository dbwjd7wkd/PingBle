// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pingble2GameMode.h"
#include "Pingble2HUD.h"
#include "Pingble2Character.h"
#include "UObject/ConstructorHelpers.h"

APingble2GameMode::APingble2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APingble2HUD::StaticClass();
}

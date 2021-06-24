// Copyright Epic Games, Inc. All Rights Reserved.

#include "PingBleGameMode.h"
#include "PingBleHUD.h"
#include "PingBleCharacter.h"
#include "UObject/ConstructorHelpers.h"

APingBleGameMode::APingBleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APingBleHUD::StaticClass();
}

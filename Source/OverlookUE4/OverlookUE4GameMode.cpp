// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "OverlookUE4GameMode.h"
#include "OverlookUE4HUD.h"
#include "OverlookUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AOverlookUE4GameMode::AOverlookUE4GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AOverlookUE4HUD::StaticClass();
}

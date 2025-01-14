// Copyright Epic Games, Inc. All Rights Reserved.

#include "AccelJuggGameMode.h"
#include "AccelJuggCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAccelJuggGameMode::AAccelJuggGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

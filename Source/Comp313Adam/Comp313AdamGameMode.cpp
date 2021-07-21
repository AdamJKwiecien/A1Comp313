// Copyright Epic Games, Inc. All Rights Reserved.

#include "Comp313AdamGameMode.h"
#include "Comp313AdamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AComp313AdamGameMode::AComp313AdamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

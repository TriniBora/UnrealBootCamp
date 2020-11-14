// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealBootCampMTBGameMode.h"
#include "UnrealBootCampMTBCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealBootCampMTBGameMode::AUnrealBootCampMTBGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

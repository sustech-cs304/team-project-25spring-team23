// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyGTAGameMode.h"
#include "MyGTACharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyGTAGameMode::AMyGTAGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

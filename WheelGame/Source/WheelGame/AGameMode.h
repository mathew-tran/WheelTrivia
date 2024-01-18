// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AGameMode.generated.h"

/**
 * 
 */
UCLASS()
class WHEELGAME_API AAGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
};

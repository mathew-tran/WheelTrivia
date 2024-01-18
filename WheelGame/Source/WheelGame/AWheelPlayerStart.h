// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "AWheelPlayerStart.generated.h"

/**
 * 
 */
UCLASS()
class WHEELGAME_API AWheelPlayerStart : public APlayerStart
{
	GENERATED_BODY()

public:
	bool IsAvailable();

	void SetOwningPlayer(AController* Controller);

private:
	AController* ControllerReference;
	
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "AWheelPlayerStart.h"

bool AWheelPlayerStart::IsAvailable()
{
    return IsValid(ControllerReference) == false;
}

void AWheelPlayerStart::SetOwningPlayer(AController* Controller)
{
    ControllerReference = Controller;
}

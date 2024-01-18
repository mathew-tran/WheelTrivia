// Fill out your copyright notice in the Description page of Project Settings.


#include "AWheelPlayerStart.h"

bool AWheelPlayerStart::IsAvailable()
{
    return ControllerReference == nullptr;
}

void AWheelPlayerStart::SetOwningPlayer(AController* Controller)
{
    ControllerReference = Controller;
}

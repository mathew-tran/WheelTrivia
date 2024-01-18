// Fill out your copyright notice in the Description page of Project Settings.


#include "AGameMode.h"
#include "Kismet/GameplayStatics.h"

#include "APlayerStart.h"

AActor* AAGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
    UWorld* World = GetWorld();

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(World, AAPlayerStart::StaticClass(), FoundActors);
       
    for (AActor* SpawnPoint : FoundActors) {
        return SpawnPoint;
    }
    return nullptr;

    //return Super::ChoosePlayerStart_Implementation(Player);
}

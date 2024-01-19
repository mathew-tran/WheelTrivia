// Fill out your copyright notice in the Description page of Project Settings.


#include "AWheelGameMode.h"
#include "Kismet/GameplayStatics.h"

#include "AWheelPlayerStart.h"

AWheelGameMode::AWheelGameMode()
{

}

AActor* AWheelGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
    UWorld* World = GetWorld();

    TArray<AActor*> FoundActors;
    UGameplayStatics::GetAllActorsOfClass(World, AWheelPlayerStart::StaticClass(), FoundActors);
       
    for (AActor* SpawnPoint : FoundActors) {
        AWheelPlayerStart* PlayerStart = Cast<AWheelPlayerStart>(SpawnPoint);
        if (IsValid(PlayerStart)) {            
            if (PlayerStart->IsAvailable()) {
                PlayerStart->SetOwningPlayer(Player);
                return SpawnPoint;
            }            
        }       
    }

    UE_LOG(LogGameMode, Error, TEXT("NO SPAWN POINTS FOUND"));
    return nullptr;
}

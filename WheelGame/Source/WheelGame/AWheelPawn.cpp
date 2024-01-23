// Fill out your copyright notice in the Description page of Project Settings.


#include "AWheelPawn.h"

// Sets default values
AAWheelPawn::AAWheelPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bReplicates = true;

}

// Called when the game starts or when spawned
void AAWheelPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAWheelPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAWheelPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


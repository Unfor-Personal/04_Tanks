// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "Tank.h"
#include "TankAIController.h"

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (PlayerTank)
	{
		// TODO Move Towards Player

		// Aim towards player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());

		// fire if ready
		ControlledTank->FireMain(); // TODO Don't fire every frame
	}
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

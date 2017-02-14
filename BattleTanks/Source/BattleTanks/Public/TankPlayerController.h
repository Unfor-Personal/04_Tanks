// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" /// Must be last include

UCLASS()
class BATTLETANKS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
private:
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

	ATank* GetControlledTank() const;

	//Move Barrel so that shots fired move to where the crosshair intersects the world.
	void AimTowardsCrosshair();
};

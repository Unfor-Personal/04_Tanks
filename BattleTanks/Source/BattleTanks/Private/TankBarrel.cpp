// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// move barrel right amount this frame
	// given a max elevation speed and the frame time

	UE_LOG(LogTemp, Warning, TEXT("Barrel elevate called at %f degrees-per-second"), DegreesPerSecond);
}

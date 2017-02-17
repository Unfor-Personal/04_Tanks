// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTanks.h"
#include "TankTracks.h"

void UTankTracks::SetThrottle(float Throttle)
{
	auto Time = GetWorld()->GetTimeSeconds();
	auto Name = GetName();
	UE_LOG(LogTemp, Warning, TEXT("%f: %s Thrattleing at %f"), Time, *Name, Throttle);
	// TODO Clamp throttle

	auto ForceApplied = GetForwardVector() * Throttle * TrackMaxDriveForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}

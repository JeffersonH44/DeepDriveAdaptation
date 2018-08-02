// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"

#define OUT

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();
	// LastTimeOpen = -this->DelayTimeToClose - 1.0f;

	if (!PressurePlate) 
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing pressure plate component"), *GetOwner()->GetName())
	}

	// obtain close yaw
	this->CloseYaw = Owner->GetActorRotation().Yaw;
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (GetTotalMassOfActorsInPlate() > MassThreshold) 
	{
		OnOpen.Broadcast();
		// LastTimeOpen = currentTime;
	}
	else
	{
		OnClose.Broadcast();
	}
}

float UOpenDoor::GetTotalMassOfActorsInPlate() 
{
	float TotalMass = 0.f;
	TArray<AActor*> OverlappingActors;
	// Find overlapping actors
	if (!PressurePlate) {
		return 0.0;
	}
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	// add all the masses
	for (const auto& Actor : OverlappingActors) 
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlapped actor: %s"), *(Actor->GetName()))
		TotalMass += Actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
	}
	return TotalMass;
}
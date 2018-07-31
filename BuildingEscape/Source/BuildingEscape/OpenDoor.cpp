// Fill out your copyright notice in the Description page of Project Settings.

#include "OpenDoor.h"
#include "GameFramework/Actor.h"
// #include "Engine.h" SLOW A LOT 

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
	ActorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
	Owner = GetOwner();
	LastTimeOpen = -this->DelayTimeToClose - 1.0f;

	// obtain close yaw
	this->CloseYaw = Owner->GetActorRotation().Yaw;
}

void UOpenDoor::OpenDoor()
{
	Owner->SetActorRotation(FRotator(0.0f, this->DoorAngle, 0.0f));
}

void UOpenDoor::CloseDoor()
{
	Owner->SetActorRotation(FRotator(0.0f, this->CloseYaw, 0.0f));
}

// Called every frame
void UOpenDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	float currentTime = GetWorld()->GetTimeSeconds();

	if (PressurePlate->IsOverlappingActor(ActorThatOpens)) 
	{
		OpenDoor();
		LastTimeOpen = currentTime;
	}
	else if(FGenericPlatformMath::Abs(currentTime - LastTimeOpen) > this->DelayTimeToClose)
	{
		CloseDoor();
	}
}


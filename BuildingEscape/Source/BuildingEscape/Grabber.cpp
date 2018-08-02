// Fill out your copyright notice in the Description page of Project Settings.

#include "Grabber.h"
#include "DrawDebugHelpers.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	/// Look for attached Physics Handle
	FindPhysicsHandleComponent();
	SetupInputComponent();
	
}

void UGrabber::SetupInputComponent()
{
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();
	if (InputComponent)
	{
		InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::Grab);
		InputComponent->BindAction("Grab", IE_Released, this, &UGrabber::Release);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing Input component"), *(GetOwner()->GetName()))
	}
}

void UGrabber::FindPhysicsHandleComponent()
{
	PhysicsHandler = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (!PhysicsHandler)
	{
		UE_LOG(LogTemp, Error, TEXT("%s missing physics handle component"), *(GetOwner()->GetName()))
	}
}

void UGrabber::Grab() {
	UE_LOG(LogTemp, Warning, TEXT("grabbing..."))
	auto HitComponent = GetFirstPhysicsBodyInReach();

	auto ActorHit = HitComponent.GetActor();
	if (ActorHit) 
	{
		/// Get the component that we want to grab
		auto ComponentToGrab = HitComponent.GetComponent();
		if (!PhysicsHandler) return;
		PhysicsHandler->GrabComponentAtLocationWithRotation(
			ComponentToGrab,
			NAME_None,
			ComponentToGrab->GetOwner()->GetActorLocation(),
			ComponentToGrab->GetOwner()->GetActorRotation()
		);
	}
}

void UGrabber::Release() {
	if (!PhysicsHandler) return;
	PhysicsHandler->ReleaseComponent();
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (!PhysicsHandler) return;

	if (PhysicsHandler->GrabbedComponent) 
	{
		auto LineTraceVectors = GetLineTraceVector();
		PhysicsHandler->SetTargetLocation(LineTraceVectors.v2); // viewpoint end as a new target location for the grabbed object
	}
}

FHitResult UGrabber::GetFirstPhysicsBodyInReach()
{
	auto LineTraceVectors = GetLineTraceVector();

	/// Setup query parameters
	FCollisionQueryParams TraceParameters(FName(TEXT("")), false, GetOwner());

	// line-trace
	FHitResult LineTraceHit;
	GetWorld()->LineTraceSingleByObjectType(
		OUT LineTraceHit,
		LineTraceVectors.v1, // start
		LineTraceVectors.v2, // end
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParameters
	);

	AActor* currentActor = LineTraceHit.GetActor();

	if (currentActor)
	{
		UE_LOG(LogTemp, Warning, TEXT("Line trace hit: %s"),
			*(currentActor->GetName())
		)
	}

	return LineTraceHit;
}
// Get line trace vectors from the viewpoint given a Radius (Reach)
FTwoVectors UGrabber::GetLineTraceVector()
{
	FVector StartLocation;
	FRotator PlayerViewpointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		OUT StartLocation,
		OUT PlayerViewpointRotation
	);

	FVector RotationVector = PlayerViewpointRotation.Vector();
	FVector EndLocation = StartLocation + RotationVector * Reach;
	return FTwoVectors(StartLocation, EndLocation);
}


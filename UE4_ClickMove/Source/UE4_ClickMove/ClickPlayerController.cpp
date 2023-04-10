#include "ClickPlayerController.h"
#include <Blueprint/AIBlueprintHelperLibrary.h>

AClickPlayerController::AClickPlayerController()
{
	// set mouse cursor show
	bShowMouseCursor = true;


}

void AClickPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("LeftClick", IE_Pressed, this, &AClickPlayerController::InputLeftMouseButtonPressed);
	InputComponent->BindAction("LeftClick", IE_Released, this, &AClickPlayerController::InputLeftMouseButtonPressed);
}

void AClickPlayerController::PlayerTick(float deltatime)
{
	Super::PlayerTick(deltatime);
	if (bClickLeftMouse) MoveToMouseCursor();
}


void AClickPlayerController::InputLeftMouseButtonPressed()
{
	bClickLeftMouse = true;
}

void AClickPlayerController::InputLeftMouseButtonReleased()
{
	bClickLeftMouse = false;
}

void AClickPlayerController::SetNewDestination(const FVector destination)
{
	APawn* const _myPawn = GetPawn();

	if (_myPawn)
	{
		float const distance = FVector::Dist(destination, _myPawn->GetActorLocation());
		if (distance > 100.0f)
		{
			UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, destination);
		}
	}
}

void AClickPlayerController::MoveToMouseCursor()
{
	FHitResult _hit;
	GetHitResultUnderCursor(ECC_Visibility, false, _hit);

	if (_hit.bBlockingHit)
	{
		SetNewDestination(_hit.ImpactPoint);
	}
}

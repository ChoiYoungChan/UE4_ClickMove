// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ClickPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class UE4_CLICKMOVE_API AClickPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	AClickPlayerController();

protected:
	void InputLeftMouseButtonPressed();

	void InputLeftMouseButtonReleased();

	void SetNewDestination(const FVector destination);

	void MoveToMouseCursor();

	virtual void SetupInputComponent() override;

	virtual void PlayerTick(float deltatime) override;

private:
	bool bClickLeftMouse;

	
};

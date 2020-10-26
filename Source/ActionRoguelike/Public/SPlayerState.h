// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SPlayerState.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCreditsChanged, APawn*, Player, int, NewCredits, int, Delta);

/**
 * 
 */
UCLASS()
class ACTIONROGUELIKE_API ASPlayerState : public APlayerState
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "State")
	int PlayerCredits;

	UPROPERTY(EditAnywhere, Category = "State")
	int MaximumPlayerCredits;

	ASPlayerState();

	UPROPERTY(BlueprintAssignable)
	FOnCreditsChanged OnCreditsChanged;

	UFUNCTION(BlueprintCallable)
	void AddCredits(int NumCreditsToAdd);

	UFUNCTION(BlueprintCallable)
	void RemoveCredits(int NumCreditsToRemove);
};
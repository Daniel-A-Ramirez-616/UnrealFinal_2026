// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Unreal_Final_2026Character.h"
#include "CPP_InteractablePawn.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL_FINAL_2026_API ACPP_InteractablePawn : public AUnreal_Final_2026Character
{
	GENERATED_BODY()


public:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	UInputAction* InteractAction;

	UFUNCTION(BlueprintImplementableEvent)
	void PerformWorldTrace();
protected:
	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


};
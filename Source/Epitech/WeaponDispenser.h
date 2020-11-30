// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "WeaponDispenser.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EPITECH_API UWeaponDispenser : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponDispenser();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	 
	UPROPERTY(Category = Move, EditAnywhere, BlueprintReadWrite)
	int price{};

};

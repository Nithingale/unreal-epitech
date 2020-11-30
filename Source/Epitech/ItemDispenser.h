// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemDispenser.generated.h"

UCLASS()
class EPITECH_API AItemDispenser : public AActor
{
	GENERATED_BODY()
		std::size_t price{};
	
public:	
	// Sets default values for this actor's properties
	AItemDispenser();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

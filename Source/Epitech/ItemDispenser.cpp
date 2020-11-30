// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemDispenser.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AItemDispenser::AItemDispenser()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemDispenser::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItemDispenser::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TArray<AActor*> actors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(), actors);
}


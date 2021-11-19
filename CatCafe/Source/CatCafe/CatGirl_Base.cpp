// Fill out your copyright notice in the Description page of Project Settings.


#include "CatGirl_Base.h"

// Sets default values
ACatGirl_Base::ACatGirl_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACatGirl_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACatGirl_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACatGirl_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


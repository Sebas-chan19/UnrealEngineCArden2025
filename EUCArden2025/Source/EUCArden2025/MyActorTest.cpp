// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorTest.h"

// Sets default values
AMyActorTest::AMyActorTest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MyFloatVariable = 50.0f;
	edad = 25;
	esInstructor = false;
	nombre = "Sebastian Lopez Garcia";
	DemonstrateFundamentals();

}

// Called when the game starts or when spawned
void AMyActorTest::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorTest::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActorTest::DemonstrateFundamentals()
{
	// Operador Aritmetico
	int32 sum = edad + 10;
	float product = MyFloatVariable * 2.5f;

	//Estructuras Control
	if (esInstructor) {
		//UE_LOG(LogTemp, Warning, TEXT("%s es instructor y tiene %d años"), *nombre, edad);
		//FString DM = FString::Printf(TEXT("%s es instructor y tiene %d años"), * nombre, edad)
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("esInstructor is true"));
	}
	else {
		//UE_LOG(LogTemp, Warning, TEXT("%s no es instructor y tiene %d años"), *nombre, edad);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("esInstructor is false"));
	}

	//ciclo for
	for (int32 i = 0; i < 5; i++) 
	{
		FString DEbugMessage = FString::Printf(TEXT("Loop iteration: %d"), i);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DEbugMessage);
	}

	//ciclo while
	int32 count = 0;
	while (count < 3) {
		FString WhileMessage = FString::Printf(TEXT("While Loop iteration: %d"), count);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Cyan, WhileMessage);
		count++;
	}
}


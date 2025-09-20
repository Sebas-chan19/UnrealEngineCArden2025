// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActorTest.generated.h"

UCLASS()
class EUCARDEN2025_API AMyActorTest : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorTest();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Instancia Publica
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	float MyFloatVariable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	int edad;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	bool esInstructor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActorTest")
	FString nombre;


	//Funcion publica
	UFUNCTION(BlueprintCallable, Category = "MyActorTest")
	void DemonstrateFundamentals();
};

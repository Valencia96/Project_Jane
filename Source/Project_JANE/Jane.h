// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Jane.generated.h"

UCLASS()
class PROJECT_JANE_API AJane : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJane();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FHitResult instantLight();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

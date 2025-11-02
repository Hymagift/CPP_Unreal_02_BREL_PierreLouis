// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExerciceInterface.h"
#include "ExerciceActor.generated.h"

UCLASS()
class CPP_UNREAL_02_BREL_P_API AExerciceActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExerciceActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	USceneComponent* Root;

	UStaticMeshComponent* Cube;

	
	UStaticMeshComponent* Sphere;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* StaticMeshComponent;

	UPROPERTY(EditInstanceOnly)
	bool bIsCube = true;

	const FVector& GetLocation_Implementation();

	UPROPERTY(EditAnywhere)
	AActor* actor;
};

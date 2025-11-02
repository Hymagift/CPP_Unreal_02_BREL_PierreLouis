// Fill out your copyright notice in the Description page of Project Settings.


#include "ExerciceActor.h"
#include "ExerciceInterface.h"

// Sets default values
AExerciceActor::AExerciceActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->SetupAttachment(Root);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/EditorMeshes/EditorCube.EditorCube"));
	if (CubeMesh.Succeeded())
		Cube->SetStaticMesh(CubeMesh.Object);

	StaticMeshComponent->SetStaticMesh(CubeMesh.Object);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/Engine/EditorMeshes/EditorSphere.EditorSphere"));
	if (SphereMesh.Succeeded())
		Sphere->SetStaticMesh(SphereMesh.Object);



}

// Called when the game starts or when spawned
void AExerciceActor::BeginPlay()
{
	Super::BeginPlay();
	if (actor == nullptr)
	
		return;
	
	else if (actor->GetClass()->ImplementsInterface(UExerciceInterface::StaticClass()));
	{
		FVector TargetLocation = IExerciceInterface::Execute_GetLocation(actor);
		StaticMeshComponent->SetWorldLocation(TargetLocation);

	}
	
}

void AExerciceActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	
	if (bIsCube = true)
	{
		StaticMeshComponent->SetStaticMesh(Cube->GetStaticMesh());
		bIsCube = false;
	}
	else
	{
		StaticMeshComponent->SetStaticMesh(Sphere->GetStaticMesh());
		bIsCube = true;
	}
}

// Called every frame
void AExerciceActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

const FVector& AExerciceActor::GetLocation_Implementation()
{
	return StaticMeshComponent->GetComponentLocation();
}


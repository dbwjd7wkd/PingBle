// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class PINGBLE_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// 몸체 (충돌을 위한 목적)
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UBoxComponent* BoxComp;

	// 외관
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Body")
	class UStaticMeshComponent* MeshComp;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
//Ctrl,Alt F11�� ���̺� �ڵ�.

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; // �� ���Ͱ� ƽ�Լ��� �������� ȣ���ϰ� �ϴ� �ڵ�
	UE_LOG(LogTemp, Log, TEXT("Constructor")); // �α׸� ���� ���.

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Log, TEXT("BeginPlay"));

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Log, TEXT("Tick"));

}

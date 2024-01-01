// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
//Ctrl,Alt F11로 라이브 코딩.

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true; // 이 엑터가 틱함수를 매프레임 호출하게 하는 코드
	UE_LOG(LogTemp, Log, TEXT("Constructor")); // 로그를 띄우는 기능.

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


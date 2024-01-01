// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class PRACTICEUNREAL_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	//엑터가 배치된 월드에서 게임이 시작하거나 엑터가 생성되었을때 한번 호출되는 것 
	//보통 게임플레이 로직을 초기화 시키는데 사용
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// Update 느낌. 엑터가 틱함수가 필요가 없는 엑터일 경우에는 틱함수를 지워 퍼포먼스 상향시킬 수 있다.
	virtual void Tick(float DeltaTime) override;

};

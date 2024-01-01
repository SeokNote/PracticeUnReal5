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
	//���Ͱ� ��ġ�� ���忡�� ������ �����ϰų� ���Ͱ� �����Ǿ����� �ѹ� ȣ��Ǵ� �� 
	//���� �����÷��� ������ �ʱ�ȭ ��Ű�µ� ���
	virtual void BeginPlay() override;

public:	
	// Called every frame
	// Update ����. ���Ͱ� ƽ�Լ��� �ʿ䰡 ���� ������ ��쿡�� ƽ�Լ��� ���� �����ս� �����ų �� �ִ�.
	virtual void Tick(float DeltaTime) override;

};

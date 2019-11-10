// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloWorldGameModeBase.h"
#include "Engine/World.h"
#include "TextWidget.h"

void AHelloWorldGameModeBase::StartPlay()
{
	// Don't forget to call the Super on UE-declared virtual methods!
	Super::StartPlay();

	// Actually spawn an instance of ATextWidget in the scene
	GetWorld()->SpawnActor<ATextWidget>(m_TextWidgetClass, { 150.0f, 0.0f, 50.0f }, FRotator({ .0f, .0f, 1.0f, .0f }));
}

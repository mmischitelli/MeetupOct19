// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HelloWorldGameModeBase.generated.h"

class ATextWidget;
/**
 * 
 */
UCLASS()
class HELLOWORLD_API AHelloWorldGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = MeetupOct19, meta = (DisplayName="TextWidget Class", AllowPrivateAccess = true))
	TSubclassOf<ATextWidget> m_TextWidgetClass;	
	
public:

	void StartPlay() override;
};

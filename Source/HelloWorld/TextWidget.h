// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GCObject.h"
#include <string>
#include <map>
#include "TextWidget.generated.h"

class UTextRenderComponent;

UCLASS()
class HELLOWORLD_API ATextWidget : public AActor
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = MeetupOct19, meta=(DisplayName="Text render component", AllowPrivateAccess = true))
	UTextRenderComponent* m_TextRenderComp;

	UPROPERTY(EditAnywhere, Category=MeetupOct19, meta=(DisplayName="Subject to salute", AllowPrivateAccess=true))
	FString m_Text;
	
public:	
	ATextWidget();

	//~ Begin AActor interface
	void BeginPlay() override;
	void BeginDestroy() override;
	//~ End AActor interface

	/**
	 * Updates the text displayed by this actor.
	 * @param string The string used to customize the salute message displayed by this actor
	 */
	void SetText(const FString& string) { _UpdateText(string); }

protected:

#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

private:
	void _UpdateText(const FString& target);
};

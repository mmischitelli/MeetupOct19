// Fill out your copyright notice in the Description page of Project Settings.


#include "TextWidget.h"
#include "Components/TextRenderComponent.h"

ATextWidget::ATextWidget()
{
	m_Text = "World";
	
	m_TextRenderComp = CreateDefaultSubobject<UTextRenderComponent>("TextRenderComponent");
	m_TextRenderComp->SetText(NSLOCTEXT("HW","placeholder","Placeholder"));
	m_TextRenderComp->SetTextRenderColor(FColor::FromHex("FF2800"));

	SetRootComponent(m_TextRenderComp);
}

void ATextWidget::BeginPlay()
{
	Super::BeginPlay();
	_UpdateText(m_Text);
}

void ATextWidget::BeginDestroy()
{
	Super::BeginDestroy();
	
	GLog->Log(ELogVerbosity::Warning, "Destroying text widget");
}

#if WITH_EDITOR
void ATextWidget::PostEditChangeProperty(FPropertyChangedEvent& e)
{
	Super::PostEditChangeProperty(e);

	const FName kPropName = (e.Property != nullptr) ? e.Property->GetFName() : NAME_None;
	if (kPropName == GET_MEMBER_NAME_CHECKED(ATextWidget, m_Text)) 
	{
		auto* valuePtr = e.Property->ContainerPtrToValuePtr<FString>(this);
		if (valuePtr) 
		{
			_UpdateText(*valuePtr);
						
			/* This is equivalent to the above line! */
			//_UpdateText(m_Text);
		}
	}
}
#endif

void ATextWidget::_UpdateText(const FString& target)
{
	m_TextRenderComp->SetText(FText::Format(NSLOCTEXT("HW", "sayhello", "Hello, {0}!"), FText::FromString(target)));
}

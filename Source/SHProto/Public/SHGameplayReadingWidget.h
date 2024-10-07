#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayReadingWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class USHGameTextsConfig;
class UScrollBox;
class UStyledRichTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class USHGameplayReadingWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* TextScroller;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* MainTextBlock;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHGameTextsConfig* GameTextsConfig;
    
    UPROPERTY(EditAnywhere)
    bool bInheritTextColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SingleScrollValue;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ContinousScrollValue;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHGameplayReadingWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ProcessPlayerSettingsChanged();
    
};


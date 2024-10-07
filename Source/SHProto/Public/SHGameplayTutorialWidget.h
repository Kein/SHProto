#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayTutorialWidget.generated.h"

class UAkAudioEvent;
class UCanvasPanel;
class USHGameTextsConfig;
class UStyledRichTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayTutorialWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* TutorialRichText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumDisplayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHGameTextsConfig* GameTextsConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* ShowAudioEvent;
    
public:
    USHGameplayTutorialWidget();

};


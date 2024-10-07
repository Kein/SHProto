#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayHealingItemsNotificationWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class USHGameplayHealingItemsNotificationRowWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayHealingItemsNotificationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayHealingItemsNotificationRowWidget* TapHealingItemNotificationRowWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayHealingItemsNotificationRowWidget* HoldHealingItemItemNotificationRowWidget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(EditDefaultsOnly)
    float HideWidgetDelayTime;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacterPlay;
    
    UPROPERTY(Transient)
    UWidgetAnimation* CurrentShowHideAnimation;
    
public:
    USHGameplayHealingItemsNotificationWidget();

protected:
    UFUNCTION()
    void ProcessShowHideAnimationFinishedEvent();
    
};


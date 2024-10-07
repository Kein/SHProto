#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayHudWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class USHCrosshairContainerWidget;
class USHGameplayFadeWidget;
class USHGameplayHealingItemsNotificationWidget;
class USHGameplayHealthIndicatorWidget;
class USHGameplayItemNotificationWidget;
class USHGameplayRadioIndicatorWidget;
class USHGameplayRangedWeaponDetailsWidget;
class USHGameplayStruggleWidget;
class USHGameplayTutorialWidget;

UCLASS(EditInlineNew)
class USHGameplayHudWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHCrosshairContainerWidget* CrosshairContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayTutorialWidget* TutorialWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayItemNotificationWidget* ItemNotificationWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayRangedWeaponDetailsWidget* RangedWeaponDetailsWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayHealingItemsNotificationWidget* HealingItemsNotificationWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayFadeWidget* GameplayFadeWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayStruggleWidget* GameplayStruggleWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayHealthIndicatorWidget* HealthIndicatorWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayRadioIndicatorWidget* RadioIndicatorWidget;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHGameplayHudWidget();

};


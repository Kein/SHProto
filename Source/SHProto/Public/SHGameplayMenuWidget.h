#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayMenuWidget.generated.h"

class ASHCharacterPlay;
class UAkAudioEvent;
class UAkStateValue;
class UCanvasPanel;
class USHGMSectionInventoryWidget;
class USHGameplaySectionBaseWidget;
class USHGameplaySectionCombineWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class USHGameplayMenuWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* SectionSwitcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* EmptySection;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGMSectionInventoryWidget* InventoryWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplaySectionCombineWidget* CombineWidget;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* SectionFadeIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* SectionFadeOut;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* NonInventoryAudioModEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* InventorySectionState_On;
    
    UPROPERTY(EditDefaultsOnly)
    UAkStateValue* InventorySectionState_Off;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHGameplaySectionBaseWidget* CurrentCastedWidget;
    
public:
    USHGameplayMenuWidget();

};


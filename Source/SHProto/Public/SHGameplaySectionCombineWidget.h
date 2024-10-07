#pragma once
#include "CoreMinimal.h"
#include "SHGameplaySectionBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "SHGameplaySectionCombineWidget.generated.h"

class UAkAudioEvent;
class UPanelWidget;
class USHCombineRecipeSlotWidget;
class USHGameplayInventorySlider;
class UUserWidget;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplaySectionCombineWidget : public USHGameplaySectionBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayInventorySlider* GameplayInventorySliderWidget;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* CombineBox;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHCombineRecipeSlotWidget> RequiredItemWidgetSubclass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UUserWidget> ConnectorWidgetSubclass;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_CombineCorrectItem;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_RemoveLast;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_CombineFail;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_CombineSuccess;
    
public:
    USHGameplaySectionCombineWidget();

};


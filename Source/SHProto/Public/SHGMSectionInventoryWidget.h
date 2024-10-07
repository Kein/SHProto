#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "SHGameplaySectionBaseWidget.h"
#include "SHInventoryCategoryConfig.h"
#include "Templates/SubclassOf.h"
#include "SHGMSectionInventoryWidget.generated.h"

class UAkAudioEvent;
class UCanvasPanel;
class USHGameplayInventorySlider;
class USHHealthBasedBorder;
class USHHealthBasedRetainerBox;
class USHInventoryCategoryWidget;
class UScrollBox;

UCLASS(EditInlineNew)
class SHPROTO_API USHGMSectionInventoryWidget : public USHGameplaySectionBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHGameplayInventorySlider* GameplayInventorySliderWidget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHInventoryCategoryConfig> CategoriesConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowLoopCategories;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMinMaxVector2D InputBlockWaitTimeMinMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputThrottleAcceleration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShowItemsWaitTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHInventoryCategoryWidget> CategoryWidgetSubclass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHInventoryCategoryWidget> SubcategoryWidgetSubclass;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_OpenInventory;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_CloseInventory;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_MoveCategory;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_OpenTranscription;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_CloseTransription;
    
    UPROPERTY(EditDefaultsOnly)
    UAkAudioEvent* AudioEvent_NotUsableItem;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHHealthBasedBorder* Border;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHHealthBasedRetainerBox* RetainerBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* CategoriesContainerScrollBox;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* CombineIndicatorContainer;
    
    USHGMSectionInventoryWidget();

};


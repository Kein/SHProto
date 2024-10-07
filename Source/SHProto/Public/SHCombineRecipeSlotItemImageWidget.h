#pragma once
#include "CoreMinimal.h"
#include "SHCombineRecipeSlotWidget.h"
#include "SHCombineRecipeSlotItemImageWidget.generated.h"

class UImage;
class UTexture;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class SHPROTO_API USHCombineRecipeSlotItemImageWidget : public USHCombineRecipeSlotWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* WrongItemAnim;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditDefaultsOnly)
    UTexture* DebugTexture;
    
public:
    USHCombineRecipeSlotItemImageWidget();

};


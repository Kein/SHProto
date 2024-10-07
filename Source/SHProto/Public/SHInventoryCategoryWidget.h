#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHInventoryCategoryWidget.generated.h"

class UTextBlock;

UCLASS(EditInlineNew)
class SHPROTO_API USHInventoryCategoryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* CategoryTextBlock;
    
    USHInventoryCategoryWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void SetHoveredSubCategory(bool IsHovered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetHoveredCategory(bool IsHovered);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCategoryWithNewItems(bool InValue);
    
};


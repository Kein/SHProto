#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/PanelSlot.h"
#include "BButtonSlot.generated.h"

UCLASS(BlueprintType)
class UCW_API UBButtonSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UBButtonSlot();

    UFUNCTION(BlueprintCallable)
    void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
    
};


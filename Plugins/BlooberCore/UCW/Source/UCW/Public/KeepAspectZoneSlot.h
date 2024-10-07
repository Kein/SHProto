#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/PanelSlot.h"
#include "KeepAspectZoneSlot.generated.h"

UCLASS(BlueprintType)
class UCW_API UKeepAspectZoneSlot : public UPanelSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HAlign;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VAlign;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UKeepAspectZoneSlot();

};


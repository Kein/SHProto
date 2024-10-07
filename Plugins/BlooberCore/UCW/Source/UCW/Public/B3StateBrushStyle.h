#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "B3StateBrushStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FB3StateBrushStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Hovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Pressed;
    
    FB3StateBrushStyle();
};


#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "B2StateBrushStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FB2StateBrushStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Active;
    
    FB2StateBrushStyle();
};


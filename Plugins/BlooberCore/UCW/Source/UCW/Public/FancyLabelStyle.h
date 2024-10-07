#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "HoverableTextStyle.h"
#include "FancyLabelStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FFancyLabelStyle : public FHoverableTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Hovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Disabled;
    
    FFancyLabelStyle();
};


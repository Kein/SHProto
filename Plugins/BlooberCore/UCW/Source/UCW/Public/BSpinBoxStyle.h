#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "B2StateBrushStyle.h"
#include "B3StateBrushStyle.h"
#include "HoverablePressableStyle.h"
#include "BSpinBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FBSpinBoxStyle : public FHoverablePressableStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle ButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FB3StateBrushStyle LeftImageStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FB3StateBrushStyle RightImageStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FB2StateBrushStyle IndicatorStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FB3StateBrushStyle InternalBorderStyle;
    
    FBSpinBoxStyle();
};


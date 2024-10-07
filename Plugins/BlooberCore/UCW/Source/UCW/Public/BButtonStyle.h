#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "Styling/SlateWidgetStyle.h"
#include "BButtonStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FBButtonStyle : public FSlateWidgetStyle {
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
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor NormalForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor HoveredForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor PressedForeground;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FSlateColor DisabledForeground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin PressedPadding;
    
    FBButtonStyle();
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateWidgetStyle.h"
#include "HoverableTextStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FHoverableTextStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FLinearColor NormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HoverColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor PressedColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DisabledColor;
    
    FHoverableTextStyle();
};


#pragma once
#include "CoreMinimal.h"
#include "3StateImageStyle.h"
#include "B2StateBrushStyle.h"
#include "B3StateBrushStyle.h"
#include "Templates/SubclassOf.h"
#include "UCWButtonStyle.h"
#include "UCWSpinBoxStyle.generated.h"

class UCommonTextStyle;

UCLASS(Abstract)
class UCW_API UUCWSpinBoxStyle : public UUCWButtonStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bInheritTextColor;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCommonTextStyle> NormalTextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FB3StateBrushStyle InternalBorderStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    F3StateImageStyle LeftImageStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    F3StateImageStyle RightImageStyle;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FB2StateBrushStyle IndicatorStyle;
    
    UUCWSpinBoxStyle();

};


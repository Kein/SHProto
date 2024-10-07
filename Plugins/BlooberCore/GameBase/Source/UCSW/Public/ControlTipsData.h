#pragma once
#include "CoreMinimal.h"
#include "ETextFont.h"
#include "ETextSize.h"
#include "ETooltipsVisibilityEffects.h"
#include "ControlTipsData.generated.h"

USTRUCT(BlueprintType)
struct FControlTipsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool Show;
    
    UPROPERTY(BlueprintReadOnly)
    ETooltipsVisibilityEffects Visibility;
    
    UPROPERTY(BlueprintReadOnly)
    ETextSize Size;
    
    UPROPERTY(BlueprintReadOnly)
    ETextFont Font;
    
    UCSW_API FControlTipsData();
};


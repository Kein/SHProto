#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHControllerLightsSettings.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct FSHControllerLightsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bControlValueWithCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DesiredColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveVector* ValueCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoopCurve;
    
    SHPROTO_API FSHControllerLightsSettings();
};


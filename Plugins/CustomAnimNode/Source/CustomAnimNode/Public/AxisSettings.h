#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AxisSettings.generated.h"

USTRUCT(Blueprintable)
struct FAxisSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EAxis::Type> YawRotationAxis;
    
    UPROPERTY(EditAnywhere)
    float BodyOrientationAlpha;
    
    CUSTOMANIMNODE_API FAxisSettings();
};


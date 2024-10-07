#pragma once
#include "CoreMinimal.h"
#include "Rendering/RenderingCommon.h"
#include "ColorVisionDeficiencyData.generated.h"

USTRUCT(BlueprintType)
struct FColorVisionDeficiencyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EColorVisionDeficiency ColorVisionDeficiency;
    
    UPROPERTY(BlueprintReadOnly)
    float Severity;
    
    UCSW_API FColorVisionDeficiencyData();
};


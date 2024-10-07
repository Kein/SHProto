#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "MaiSenseConfig_The6thSense.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class MAI_API UMaiSenseConfig_The6thSense : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DistanceCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SensingRange;
    
    UMaiSenseConfig_The6thSense();

};


#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig_Sight.h"
#include "MaiSenseConfigDebugger.h"
#include "MaiSenseConfig_Smell.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class MAI_API UMaiSenseConfig_Smell : public UAISenseConfig_Sight, public IMaiSenseConfigDebugger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DistanceCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* AngleCurve;
    
    UMaiSenseConfig_Smell();


    // Fix for true pure virtual functions not being implemented
};


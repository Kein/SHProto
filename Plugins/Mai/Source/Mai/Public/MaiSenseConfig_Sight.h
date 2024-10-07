#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig_Sight.h"
#include "MaiSenseConfigDebugger.h"
#include "MaiSenseConfig_Sight.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew)
class MAI_API UMaiSenseConfig_Sight : public UAISenseConfig_Sight, public IMaiSenseConfigDebugger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DistanceCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* AngleCurve;
    
    UMaiSenseConfig_Sight();


    // Fix for true pure virtual functions not being implemented
};


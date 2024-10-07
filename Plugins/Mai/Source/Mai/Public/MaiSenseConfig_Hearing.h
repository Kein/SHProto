#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "Perception/AISenseConfig.h"
#include "MaiSenseConfigDebugger.h"
#include "MaiSenseConfig_Hearing.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, Config=Engine)
class MAI_API UMaiSenseConfig_Hearing : public UAISenseConfig, public IMaiSenseConfigDebugger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* DistanceCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HearingRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HearingRangeThroughWalls;
    
    UPROPERTY(EditAnywhere)
    uint8 HearingThroughWalls: 1;
    
    UPROPERTY()
    float LoSHearingRange;
    
    UPROPERTY()
    uint8 bUseLoSHearing: 1;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UMaiSenseConfig_Hearing();


    // Fix for true pure virtual functions not being implemented
};


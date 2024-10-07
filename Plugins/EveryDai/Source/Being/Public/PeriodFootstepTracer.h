#pragma once
#include "CoreMinimal.h"
#include "BeingFootstepTracer.h"
#include "EBeingWalkingStance.h"
#include "PeriodFootstepTracer.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UPeriodFootstepTracer : public UBeingFootstepTracer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBeingWalkingStance, float> _Period;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DefaultPeriod;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    EBeingWalkingStance _CurrentStance;
    
    UPeriodFootstepTracer(const FObjectInitializer& ObjectInitializer);

};


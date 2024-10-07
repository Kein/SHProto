#pragma once
#include "CoreMinimal.h"
#include "BeingAggroLevelStat.h"
#include "BeingHearingAggroLevel.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingHearingAggroLevel : public UBeingAggroLevelStat {
    GENERATED_BODY()
public:
    UBeingHearingAggroLevel(const FObjectInitializer& ObjectInitializer);

};


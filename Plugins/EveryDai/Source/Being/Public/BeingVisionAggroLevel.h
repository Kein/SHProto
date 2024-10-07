#pragma once
#include "CoreMinimal.h"
#include "BeingAggroLevelStat.h"
#include "BeingVisionAggroLevel.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingVisionAggroLevel : public UBeingAggroLevelStat {
    GENERATED_BODY()
public:
    UBeingVisionAggroLevel(const FObjectInitializer& ObjectInitializer);

};


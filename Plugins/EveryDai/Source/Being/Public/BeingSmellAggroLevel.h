#pragma once
#include "CoreMinimal.h"
#include "BeingAggroLevelStat.h"
#include "BeingSmellAggroLevel.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingSmellAggroLevel : public UBeingAggroLevelStat {
    GENERATED_BODY()
public:
    UBeingSmellAggroLevel(const FObjectInitializer& ObjectInitializer);

};


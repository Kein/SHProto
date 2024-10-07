#pragma once
#include "CoreMinimal.h"
#include "SHSwarmRegionBase.h"
#include "SHSwarmDestroyRegion.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSwarmDestroyRegion : public USHSwarmRegionBase {
    GENERATED_BODY()
public:
    USHSwarmDestroyRegion(const FObjectInitializer& ObjectInitializer);

};


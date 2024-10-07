#pragma once
#include "CoreMinimal.h"
#include "SHSwarmRegionBase.h"
#include "SHSwarmBoundRegion.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSwarmBoundRegion : public USHSwarmRegionBase {
    GENERATED_BODY()
public:
    USHSwarmBoundRegion(const FObjectInitializer& ObjectInitializer);

};


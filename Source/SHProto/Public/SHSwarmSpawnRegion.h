#pragma once
#include "CoreMinimal.h"
#include "SHSwarmRegionBase.h"
#include "SHSwarmSpawnRegion.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSwarmSpawnRegion : public USHSwarmRegionBase {
    GENERATED_BODY()
public:
    USHSwarmSpawnRegion(const FObjectInitializer& ObjectInitializer);

};


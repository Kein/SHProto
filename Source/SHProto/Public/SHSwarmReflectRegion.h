#pragma once
#include "CoreMinimal.h"
#include "SHSwarmRegionBase.h"
#include "SHSwarmReflectRegion.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSwarmReflectRegion : public USHSwarmRegionBase {
    GENERATED_BODY()
public:
    USHSwarmReflectRegion(const FObjectInitializer& ObjectInitializer);

};


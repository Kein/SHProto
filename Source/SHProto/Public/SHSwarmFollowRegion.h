#pragma once
#include "CoreMinimal.h"
#include "SHSwarmRegionBase.h"
#include "SHSwarmFollowRegion.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSwarmFollowRegion : public USHSwarmRegionBase {
    GENERATED_BODY()
public:
    USHSwarmFollowRegion(const FObjectInitializer& ObjectInitializer);

};


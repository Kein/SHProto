#pragma once
#include "CoreMinimal.h"
#include "SHSwarmRegionBase.h"
#include "SHSwarmFollowPoint.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSwarmFollowPoint : public USHSwarmRegionBase {
    GENERATED_BODY()
public:
    USHSwarmFollowPoint(const FObjectInitializer& ObjectInitializer);

};


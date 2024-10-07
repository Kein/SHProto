#pragma once
#include "CoreMinimal.h"
#include "SHTraversalIconBaseManager.h"
#include "SHTraversalObstacleIconManager.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHTraversalObstacleIconManager : public USHTraversalIconBaseManager {
    GENERATED_BODY()
public:
    USHTraversalObstacleIconManager(const FObjectInitializer& ObjectInitializer);

};


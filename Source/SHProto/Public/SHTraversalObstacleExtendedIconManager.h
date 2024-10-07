#pragma once
#include "CoreMinimal.h"
#include "SHTraversalIconBaseManager.h"
#include "SHTraversalObstacleExtendedIconManager.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHTraversalObstacleExtendedIconManager : public USHTraversalIconBaseManager {
    GENERATED_BODY()
public:
    USHTraversalObstacleExtendedIconManager(const FObjectInitializer& ObjectInitializer);

};


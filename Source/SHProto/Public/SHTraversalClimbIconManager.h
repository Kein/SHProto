#pragma once
#include "CoreMinimal.h"
#include "SHTraversalIconBaseManager.h"
#include "SHTraversalClimbIconManager.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHTraversalClimbIconManager : public USHTraversalIconBaseManager {
    GENERATED_BODY()
public:
    USHTraversalClimbIconManager(const FObjectInitializer& ObjectInitializer);

};


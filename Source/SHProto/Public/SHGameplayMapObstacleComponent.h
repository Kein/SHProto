#pragma once
#include "CoreMinimal.h"
#include "SHGameplayMapObjectComponent.h"
#include "SHGameplayMapObstacleComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHGameplayMapObstacleComponent : public USHGameplayMapObjectComponent {
    GENERATED_BODY()
public:
    USHGameplayMapObstacleComponent(const FObjectInitializer& ObjectInitializer);

};


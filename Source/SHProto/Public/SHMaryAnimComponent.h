#pragma once
#include "CoreMinimal.h"
#include "ESHMaryAnimInstanceMovementState.h"
#include "SHEnemyAnimComponent.h"
#include "SHMaryAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMaryAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    USHMaryAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMaryMovementState(ESHMaryAnimInstanceMovementState InMovementState, bool InMovementChangeInProgress);
    
};


#pragma once
#include "CoreMinimal.h"
#include "SHDoorLockBaseComponent.h"
#include "SHSlidingDoorLockComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHSlidingDoorLockComponent : public USHDoorLockBaseComponent {
    GENERATED_BODY()
public:
    USHSlidingDoorLockComponent(const FObjectInitializer& ObjectInitializer);

};


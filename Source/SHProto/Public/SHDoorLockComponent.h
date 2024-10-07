#pragma once
#include "CoreMinimal.h"
#include "SHDoorLockBaseComponent.h"
#include "SHDoorLockComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHDoorLockComponent : public USHDoorLockBaseComponent {
    GENERATED_BODY()
public:
    USHDoorLockComponent(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "SHPlayerCameraManager.generated.h"

UCLASS(Abstract, NonTransient)
class ASHPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
    ASHPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

};


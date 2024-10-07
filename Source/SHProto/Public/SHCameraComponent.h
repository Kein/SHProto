#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "SHCameraComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    USHCameraComponent(const FObjectInitializer& ObjectInitializer);

};


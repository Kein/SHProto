#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "DebugCameraComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UDebugCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UDebugCameraComponent(const FObjectInitializer& ObjectInitializer);

};


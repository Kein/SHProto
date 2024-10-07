#pragma once
#include "CoreMinimal.h"
#include "RaycastDetectableComponent.h"
#include "SHRaycastDetectableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHRaycastDetectableComponent : public URaycastDetectableComponent {
    GENERATED_BODY()
public:
    USHRaycastDetectableComponent(const FObjectInitializer& ObjectInitializer);

};


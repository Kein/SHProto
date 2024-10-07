#pragma once
#include "CoreMinimal.h"
#include "ScreenDetectableComponent.h"
#include "SHScreenDetectableComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHScreenDetectableComponent : public UScreenDetectableComponent {
    GENERATED_BODY()
public:
    USHScreenDetectableComponent(const FObjectInitializer& ObjectInitializer);

};


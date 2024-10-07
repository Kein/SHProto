#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SHInteractionIconSlotComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHInteractionIconSlotComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USHInteractionIconSlotComponent(const FObjectInitializer& ObjectInitializer);

};


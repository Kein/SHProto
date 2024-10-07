#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SHBrokenGlassShardsContainerComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHBrokenGlassShardsContainerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    USHBrokenGlassShardsContainerComponent(const FObjectInitializer& ObjectInitializer);

};


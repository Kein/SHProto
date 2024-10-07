#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MaiPathNodeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiPathNodeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UMaiPathNodeComponent(const FObjectInitializer& ObjectInitializer);

};


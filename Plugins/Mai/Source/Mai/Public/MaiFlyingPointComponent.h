#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MaiFlyingPointComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiFlyingPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UMaiFlyingPointComponent(const FObjectInitializer& ObjectInitializer);

};


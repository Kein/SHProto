#pragma once
#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "PointLightWithShadowDistance.generated.h"

UCLASS(MinimalAPI)
class APointLightWithShadowDistance : public APointLight {
    GENERATED_BODY()
public:
    APointLightWithShadowDistance(const FObjectInitializer& ObjectInitializer);

};


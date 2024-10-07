#pragma once
#include "CoreMinimal.h"
#include "Engine/SpotLight.h"
#include "SpotLightWithShadowDistance.generated.h"

UCLASS(MinimalAPI)
class ASpotLightWithShadowDistance : public ASpotLight {
    GENERATED_BODY()
public:
    ASpotLightWithShadowDistance(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Engine/RectLight.h"
#include "RectLightWithShadowDistance.generated.h"

UCLASS(MinimalAPI)
class ARectLightWithShadowDistance : public ARectLight {
    GENERATED_BODY()
public:
    ARectLightWithShadowDistance(const FObjectInitializer& ObjectInitializer);

};


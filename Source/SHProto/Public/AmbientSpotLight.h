#pragma once
#include "CoreMinimal.h"
#include "Engine/SpotLight.h"
#include "AmbientSpotLight.generated.h"

UCLASS(MinimalAPI)
class AAmbientSpotLight : public ASpotLight {
    GENERATED_BODY()
public:
    AAmbientSpotLight(const FObjectInitializer& ObjectInitializer);

};


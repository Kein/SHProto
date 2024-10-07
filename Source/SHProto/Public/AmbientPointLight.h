#pragma once
#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "AmbientPointLight.generated.h"

UCLASS(MinimalAPI)
class AAmbientPointLight : public APointLight {
    GENERATED_BODY()
public:
    AAmbientPointLight(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "Engine/RectLight.h"
#include "AmbientRectLight.generated.h"

UCLASS(MinimalAPI)
class AAmbientRectLight : public ARectLight {
    GENERATED_BODY()
public:
    AAmbientRectLight(const FObjectInitializer& ObjectInitializer);

};


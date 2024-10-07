#pragma once
#include "CoreMinimal.h"
#include "Engine/PointLight.h"
#include "DebugPointLight.generated.h"

UCLASS()
class SHPROTO_API ADebugPointLight : public APointLight {
    GENERATED_BODY()
public:
    ADebugPointLight(const FObjectInitializer& ObjectInitializer);

};


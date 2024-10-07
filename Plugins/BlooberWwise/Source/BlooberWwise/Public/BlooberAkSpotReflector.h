#pragma once
#include "CoreMinimal.h"
#include "AkSpotReflector.h"
#include "BlooberAkSpotReflector.generated.h"

UCLASS(Abstract)
class BLOOBERWWISE_API ABlooberAkSpotReflector : public AAkSpotReflector {
    GENERATED_BODY()
public:
    ABlooberAkSpotReflector(const FObjectInitializer& ObjectInitializer);

};


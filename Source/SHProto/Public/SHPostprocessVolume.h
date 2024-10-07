#pragma once
#include "CoreMinimal.h"
#include "AtmosphereCtrlVolume.h"
#include "SHPostprocessVolume.generated.h"

UCLASS()
class SHPROTO_API ASHPostprocessVolume : public AAtmosphereCtrlVolume {
    GENERATED_BODY()
public:
    ASHPostprocessVolume(const FObjectInitializer& ObjectInitializer);

};


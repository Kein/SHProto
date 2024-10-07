#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "BlooberAkSpatialAudioVolume.generated.h"

UCLASS(Abstract)
class BLOOBERWWISE_API ABlooberAkSpatialAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
    ABlooberAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "AkReverbVolume.h"
#include "BlooberAkReverbVolume.generated.h"

UCLASS(Abstract)
class BLOOBERWWISE_API ABlooberAkReverbVolume : public AAkReverbVolume {
    GENERATED_BODY()
public:
    ABlooberAkReverbVolume(const FObjectInitializer& ObjectInitializer);

};


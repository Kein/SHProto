#pragma once
#include "CoreMinimal.h"
#include "BlooberAkReverbVolume.h"
#include "SHAkReverbVolume.generated.h"

UCLASS()
class SHPROTO_API ASHAkReverbVolume : public ABlooberAkReverbVolume {
    GENERATED_BODY()
public:
    ASHAkReverbVolume(const FObjectInitializer& ObjectInitializer);

};


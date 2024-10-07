#pragma once
#include "CoreMinimal.h"
#include "AkAmbientSound.h"
#include "BlooberAkAmbientSound.generated.h"

UCLASS(Abstract)
class BLOOBERWWISE_API ABlooberAkAmbientSound : public AAkAmbientSound {
    GENERATED_BODY()
public:
    ABlooberAkAmbientSound(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "AkAcousticPortal.h"
#include "BlooberAkAcousticPortal.generated.h"

UCLASS(Abstract)
class BLOOBERWWISE_API ABlooberAkAcousticPortal : public AAkAcousticPortal {
    GENERATED_BODY()
public:
    ABlooberAkAcousticPortal(const FObjectInitializer& ObjectInitializer);

};


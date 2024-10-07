#pragma once
#include "CoreMinimal.h"
#include "SHNiagaraVolume.h"
#include "SHGameplayRainVolume.generated.h"

UCLASS()
class ASHGameplayRainVolume : public ASHNiagaraVolume {
    GENERATED_BODY()
public:
    ASHGameplayRainVolume(const FObjectInitializer& ObjectInitializer);

};


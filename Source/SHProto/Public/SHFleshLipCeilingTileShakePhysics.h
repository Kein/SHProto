#pragma once
#include "CoreMinimal.h"
#include "SHFleshLipCeilingTileShakePhysics.generated.h"

class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FSHFleshLipCeilingTileShakePhysics {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UNiagaraComponent* ParticleEmitter;
    
public:
    SHPROTO_API FSHFleshLipCeilingTileShakePhysics();
};


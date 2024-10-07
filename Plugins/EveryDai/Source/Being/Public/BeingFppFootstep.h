#pragma once
#include "CoreMinimal.h"
#include "BeingFootstep.h"
#include "BeingFppFootstep.generated.h"

UCLASS(Abstract, NonTransient)
class BEING_API ABeingFppFootstep : public ABeingFootstep {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float _PitchOffsetMul;
    
    UPROPERTY(EditAnywhere)
    float _PitchBackOffsetMul;
    
    UPROPERTY(EditAnywhere)
    float _VelocityOffsetMul;
    
    UPROPERTY(EditAnywhere)
    float _MinVelocity;
    
public:
    ABeingFppFootstep(const FObjectInitializer& ObjectInitializer);

};


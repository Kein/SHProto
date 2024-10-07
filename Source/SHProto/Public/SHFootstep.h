#pragma once
#include "CoreMinimal.h"
#include "BeingFootstep.h"
#include "SHFootstep.generated.h"

UCLASS(Abstract, NonTransient)
class SHPROTO_API ASHFootstep : public ABeingFootstep {
    GENERATED_BODY()
public:
    ASHFootstep(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "SHNPCAnimInstanceLocomotionSlot.generated.h"

class USHNPCLocomotionAnimInstance;

USTRUCT(BlueprintType)
struct FSHNPCAnimInstanceLocomotionSlot {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<USHNPCLocomotionAnimInstance> CachedLocomotion;
    
public:
    SHPROTO_API FSHNPCAnimInstanceLocomotionSlot();
};


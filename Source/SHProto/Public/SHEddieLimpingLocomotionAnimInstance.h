#pragma once
#include "CoreMinimal.h"
#include "ESHEddieLimpingAnimInstanceLocomotionState.h"
#include "SHEddieLocomotionAnimInstance.h"
#include "SHEddieLimpingLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHEddieLimpingLocomotionAnimInstance : public USHEddieLocomotionAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    ESHEddieLimpingAnimInstanceLocomotionState LocomotionStateRequest;
    
public:
    USHEddieLimpingLocomotionAnimInstance();

};


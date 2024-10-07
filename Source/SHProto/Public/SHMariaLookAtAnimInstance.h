#pragma once
#include "CoreMinimal.h"
#include "SHAimOffsetAnimInstance.h"
#include "SHMariaLookAtAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMariaLookAtAnimInstance : public USHAimOffsetAnimInstance {
    GENERATED_BODY()
public:
    USHMariaLookAtAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    float GetFlashlightCoverEyesAnimBlendWeigth() const;
    
};


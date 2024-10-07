#pragma once
#include "CoreMinimal.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHMannequinLocomotionAnimInstance.generated.h"

class USHMannequinAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHMannequinLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    USHMannequinLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHMannequinAnimInstanceStateData* GetMannequinAnimInstanceStateData() const;
    
};


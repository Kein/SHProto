#pragma once
#include "CoreMinimal.h"
#include "SHMonsterAnimInstance.h"
#include "SHMannequinAnimInstance.generated.h"

class USHMannequinAnimInstanceStateData;
class USHMannequinLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHMannequinAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
    USHMannequinAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHMannequinLocomotionAnimInstance* GetMannequinLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHMannequinAnimInstanceStateData* GetMannequinAnimInstanceStateData() const;
    
};


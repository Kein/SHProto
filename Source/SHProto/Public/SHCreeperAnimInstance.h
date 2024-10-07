#pragma once
#include "CoreMinimal.h"
#include "SHMonsterAnimInstance.h"
#include "SHCreeperAnimInstance.generated.h"

class USHCreeperAnimInstanceStateData;
class USHCreeperLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHCreeperAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool IsAttacking;
    
    UPROPERTY(BlueprintReadOnly)
    float AttackWalkingRate;
    
public:
    USHCreeperAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHCreeperLocomotionAnimInstance* GetCreeperLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHCreeperAnimInstanceStateData* GetCreeperAnimInstanceStateData() const;
    
};


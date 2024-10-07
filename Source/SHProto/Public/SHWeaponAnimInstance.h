#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SHWeaponAnimInstance.generated.h"

UCLASS(Abstract, NonTransient)
class SHPROTO_API USHWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    USHWeaponAnimInstance();

    UFUNCTION(BlueprintPure)
    bool IsAiming() const;
    
};


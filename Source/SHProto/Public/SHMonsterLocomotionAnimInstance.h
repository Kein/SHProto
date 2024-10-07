#pragma once
#include "CoreMinimal.h"
#include "SHNPCLocomotionAnimInstance.h"
#include "SHMonsterLocomotionAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHMonsterLocomotionAnimInstance : public USHNPCLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    float IdleStartTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bWarpingEnableOW;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float StrideScaleOW;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsOtherWorldEnemy;
    
public:
    USHMonsterLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToNeutral();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToMaximum();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToCautious();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnStanceChangedToAggressive();
    
    UFUNCTION(BlueprintPure)
    bool GetIsOtherWorldEnemy() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipAnimInstanceTransformationState.h"
#include "SHMonsterAnimInstance.h"
#include "SHFleshLipAnimInstance.generated.h"

class USHFleshLipAnimInstanceStateData;
class USHFleshLipFallenLocomotionAnimInstance;
class USHFleshLipFlyingLocomotionAnimInstance;
class USHFleshLipHangingLocomotionAnimInstance;
class USHFleshLipLocomotionAnimInstance;
class USHFleshLipStandingLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHFleshLipAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    ESHFleshLipAnimInstanceTransformationState TransformationState;
    
public:
    USHFleshLipAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopChargeMovement();
    
    UFUNCTION(BlueprintCallable)
    void StartChargeMovement();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnFleshLipTransformationStateChanged(ESHFleshLipAnimInstanceTransformationState InTransformedInto);
    
    UFUNCTION(BlueprintPure)
    USHFleshLipStandingLocomotionAnimInstance* GetFleshLipStandingLocomotionAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFleshLipRightArmIsReleased() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFleshLipLegsAreReleased() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFleshLipLeftArmIsReleased() const;
    
    UFUNCTION(BlueprintPure)
    USHFleshLipHangingLocomotionAnimInstance* GetFleshLipHangingLocomotionAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    USHFleshLipFlyingLocomotionAnimInstance* GetFleshLipFlyingLocomotionAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    USHFleshLipFallenLocomotionAnimInstance* GetFleshLipFallenLocomotionAnimInstance() const;
    
public:
    UFUNCTION(BlueprintPure)
    USHFleshLipAnimInstanceStateData* GetFleshLipAnimInstanceStateData() const;
    
protected:
    UFUNCTION(BlueprintPure)
    USHFleshLipLocomotionAnimInstance* GetActiveFleshLipLocomotionAnimInstance() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "ESHFriendAnimInstanceLocomotionState.h"
#include "SHNPCLocomotionAnimInstance.h"
#include "SHFriendLocomotionAnimInstance.generated.h"

class USHFriendAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHFriendLocomotionAnimInstance : public USHNPCLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHFriendAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float Speed;
    
    UPROPERTY(BlueprintReadOnly)
    float MovementPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MovementAnimationSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangePlayRate;
    
    UPROPERTY(BlueprintReadOnly)
    float CircularMovementRadius;
    
    UPROPERTY(BlueprintReadOnly)
    float CircularMovementDirection;
    
    UPROPERTY(BlueprintReadOnly)
    float LeanValue;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LeanInterpSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float AdditionalRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeLegOnGround;
    
    USHFriendLocomotionAnimInstance();

    UFUNCTION(BlueprintPure)
    USHFriendAnimInstanceStateData* GetFriendAnimInstanceStateData() const;
    
};


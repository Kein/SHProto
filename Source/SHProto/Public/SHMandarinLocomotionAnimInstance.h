#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESHMandarinAnimInstanceLocomotionState.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHMandarinLocomotionAnimInstance.generated.h"

class USHMandarinAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHMandarinLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    ESHMandarinAnimInstanceLocomotionState LocomotionStateRequest;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeLegOnGround;
    
    UPROPERTY(BlueprintReadOnly)
    float MoveChangeStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float StrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredStrafeAngle;
    
    UPROPERTY(BlueprintReadOnly)
    float TurnInPlaceAngle;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    float TargetDesiredRotationYaw;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector TargetDesiredVelocity;
    
public:
    USHMandarinLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool IsMandarinOver();
    
public:
    UFUNCTION(BlueprintPure)
    void GetSmoothedLookAt(FRotator& OutRotation, float& OutAlpha) const;
    
protected:
    UFUNCTION(BlueprintPure)
    USHMandarinAnimInstanceStateData* GetMandarinAnimInstanceStateData() const;
    
public:
    UFUNCTION(BlueprintPure)
    void GetDesiredVelocitySizeAndYaw(float& OutVectorSize, float& OutVectorYaw, float Smoothing);
    
    UFUNCTION(BlueprintCallable)
    void CacheTurnInPlaceAngle();
    
};


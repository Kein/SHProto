#pragma once
#include "CoreMinimal.h"
#include "SHMonsterLocomotionAnimInstance.h"
#include "SHEddieLocomotionAnimInstance.generated.h"

class USHEddieAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHEddieLocomotionAnimInstance : public USHMonsterLocomotionAnimInstance {
    GENERATED_BODY()
public:
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
    
    UPROPERTY(BlueprintReadOnly)
    float DesiredSpeed;
    
    USHEddieLocomotionAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHEddieAnimInstanceStateData* GetEddieAnimInstanceStateData() const;
    
};


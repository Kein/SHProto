#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ESHHealthStateEnum.h"
#include "SHAimOffsetAnimInstance.generated.h"

UCLASS(NonTransient)
class SHPROTO_API USHAimOffsetAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FVector2D HeadRotation;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    float LookAtAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool IsAiming;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool HasLookAtTarget;
    
    USHAimOffsetAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    ESHHealthStateEnum GetHealthState() const;
    
};


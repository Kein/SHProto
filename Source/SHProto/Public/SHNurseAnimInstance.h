#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHMonsterAnimInstance.h"
#include "SHNurseAnimInstance.generated.h"

class USHNurseAnimInstanceStateData;
class USHNurseLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHNurseAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    float HeadShakeAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float HeadShakeSnapshotPoseAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator LookRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float LookRotationAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float ThighRotationForSkirt;
    
public:
    USHNurseAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHNurseLocomotionAnimInstance* GetNurseLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHNurseAnimInstanceStateData* GetNurseAnimInstanceStateData() const;
    
};


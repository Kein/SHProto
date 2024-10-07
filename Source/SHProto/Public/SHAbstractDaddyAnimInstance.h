#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHMonsterAnimInstance.h"
#include "SHAbstractDaddyAnimInstance.generated.h"

class USHAbstractDaddyAnimInstanceStateData;
class USHAbstractDaddyLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHAbstractDaddyAnimInstance : public USHMonsterAnimInstance {
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
    
    UPROPERTY()
    FVector BrakingPoint;
    
public:
    USHAbstractDaddyAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StopChargeMovement();
    
    UFUNCTION(BlueprintCallable)
    void StartChargeMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetOutstretchedArmsActive(bool InOutstretchedArmsActive);
    
    UFUNCTION()
    void SetBrakingPoint(FVector Location);
    
protected:
    UFUNCTION(BlueprintPure)
    FVector GetBrakingPoint() const;
    
    UFUNCTION(BlueprintPure)
    USHAbstractDaddyLocomotionAnimInstance* GetAbstractDaddyLocomotionAnimInstance(int32 SlotIndex) const;
    
public:
    UFUNCTION(BlueprintPure)
    USHAbstractDaddyAnimInstanceStateData* GetAbstractDaddyAnimInstanceStateData() const;
    
};


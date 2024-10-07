#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ELocomotionState.h"
#include "SHCharAnimationInstance.generated.h"

class ASHItemWeapon;
class USHMovementAnimationsSetData;
class USHWeaponManageCmbSubcomp;

UCLASS(NonTransient)
class USHCharAnimationInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LocomotionGraphTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName LookAtOffsetGraphTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName ChangeLocomotionSnapshotName;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ChangeLocomotionAlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bWholeBodyAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SpineExtraAngle;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float ChangeLocomotionAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    ELocomotionState LocomotionState;
    
    UPROPERTY()
    USHMovementAnimationsSetData* RequestedNewAnimationsSetData;
    
private:
    UPROPERTY()
    USHWeaponManageCmbSubcomp* WeaponManageCmbSubcomp;
    
public:
    USHCharAnimationInstance();

protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsCharacterCorrectivePostprocessEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsChangingWeaponActionPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimingWeapon() const;
    
    UFUNCTION(BlueprintPure)
    void GetSpeedWarpingForcedMultiplier(bool& Enabled, float& ForcedValue) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetPlayingSlotAnimationSlotNames() const;
    
    UFUNCTION(BlueprintPure)
    ASHItemWeapon* GetEquippedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetAllPlayingSlotAnimationSlotNames() const;
    
};


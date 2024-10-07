#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESHAnimEndType.h"
#include "PlayAnimationData.h"
#include "SHCameraAnimationData.h"
#include "SHCombatSubcomponentBase.h"
#include "SHDefenceCmbSubcomp.generated.h"

class ACharacter;
class UAnimMontage;
class UObject;
class USHDefenceCmbSubcomp;
class USHDefenceCmbSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHDefenceCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHDefenceEvent, USHDefenceCmbSubcomp*, DefenceCmbSubcomp);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSHDefenceEvent OnIsOnFloorChangedEvent;
    
    UPROPERTY(Transient)
    USHDefenceCmbSubcompSettings* Settings;
    
public:
    USHDefenceCmbSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetDodgeBlocked(bool InBlocked, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void RequestPerformDodge(FVector InMovementVector);
    
    UFUNCTION(BlueprintCallable)
    bool RequestFallToFloor(const FPlayAnimationData& FallAnim, const FSHCameraAnimationData& CameraAnim);
    
    UFUNCTION(BlueprintCallable)
    bool RequestDefaultFallToFloor();
    
protected:
    UFUNCTION()
    void OnQuickTurnEnd(bool bWasCompleted);
    
    UFUNCTION()
    void OnDodgeEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnDodgeBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsRightAfterDodge() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnFloor() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInSuperArmour() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInQuickTurn() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSyncedActionEnd(ACharacter* CharacterSynchedWith);
    
    UFUNCTION(BlueprintCallable)
    void HandleSyncedActionBegin(ACharacter* CharacterSynchedWith);
    
};


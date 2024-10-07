#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHCombatSubcomponentBase.h"
#include "SHMeleeCmbSubcomp.generated.h"

class ASHItemWeapon;
class ISHMeleeAttackSecondaryTargetInterface;
class USHMeleeAttackSecondaryTargetInterface;
class UAnimMontage;
class USHMeleeCmbSubcomp;

UCLASS(EditInlineNew)
class SHPROTO_API USHMeleeCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHMeleeCombatWeaponContextEvent, USHMeleeCmbSubcomp*, MeleeCombatSubcomponent, ASHItemWeapon*, ItemWeaponContext);
    
    UPROPERTY(BlueprintAssignable)
    FSHMeleeCombatWeaponContextEvent OnPrimaryAttackStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHMeleeCombatWeaponContextEvent OnSecondaryAttackStarted;
    
protected:
    UPROPERTY(Transient)
    TArray<TScriptInterface<ISHMeleeAttackSecondaryTargetInterface>> RegisteredSecondaryTargets;
    
public:
    USHMeleeCmbSubcomp();

protected:
    UFUNCTION()
    void OnMeleeAttackEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnMeleeAttackBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
};


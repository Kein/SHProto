#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHCombatSubcomponentBase.h"
#include "SHRangedCmbSubcomp.generated.h"

class ASHItemWeapon;
class ASHItemWeaponRanged;
class UAnimMontage;
class UObject;
class USHCharacterPlayMovementComponent;
class USHRangedCmbSubcomp;
class USHWeaponManageCmbSubcomp;

UCLASS(EditInlineNew)
class SHPROTO_API USHRangedCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHRangedCombatWeaponContextEvent, USHRangedCmbSubcomp*, RangedCombatSubcomponent, ASHItemWeapon*, ItemWeaponContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHRangedCombatEvent, USHRangedCmbSubcomp*, RangedCombatSubcomponent);
    
    UPROPERTY(BlueprintAssignable)
    FSHRangedCombatEvent OnRangedAimPointingActorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FSHRangedCombatWeaponContextEvent OnRangedFireSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSHRangedCombatWeaponContextEvent OnRangedFireOutOfAmmo;
    
    UPROPERTY(BlueprintAssignable)
    FSHRangedCombatWeaponContextEvent OnRangedReload;
    
protected:
    UPROPERTY(SaveGame)
    TMap<FName, int32> WeaponsAmmoCounts;
    
    UPROPERTY(SaveGame)
    TMap<FName, bool> SingleActionWeaponReadySaves;
    
public:
    USHRangedCmbSubcomp();

    UFUNCTION(Exec)
    void SHDebug_Character_Combat_ForceRangedAim();
    
    UFUNCTION(BlueprintCallable)
    void RequestManualFire(const UObject* Object);
    
protected:
    UFUNCTION()
    void ProcessSprintRequestedChangeEvent(USHCharacterPlayMovementComponent* ComponentRef);
    
    UFUNCTION()
    void ProcessIsInSprintChangeEvent(USHCharacterPlayMovementComponent* ComponentRef);
    
    UFUNCTION()
    void ProcessEquippedWeaponModifiedEvent(USHWeaponManageCmbSubcomp* WeaponManager);
    
    UFUNCTION()
    void OnRangedSingleActionPrepareEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnRangedReloadEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnRangedFireEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInRangedAim() const;
    
    UFUNCTION(BlueprintPure)
    ASHItemWeaponRanged* GetEquippedRangedWeapon() const;
    
};


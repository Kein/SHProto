#pragma once
#include "CoreMinimal.h"
#include "ESHAnimEndType.h"
#include "SHCombatSubcomponentBase.h"
#include "SHWeaponManageCmbSubcomp.generated.h"

class ASHItemWeapon;
class UAnimMontage;
class USHCharacterPlayCombatComponent;
class USHCharacterPlayItemsComponent;
class USHWeaponManageCmbSubcomp;

UCLASS(EditInlineNew)
class SHPROTO_API USHWeaponManageCmbSubcomp : public USHCombatSubcomponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHHWeaponManageEvent, USHWeaponManageCmbSubcomp*, WeaponManagerSubcomp);
    
protected:
    UPROPERTY(Transient)
    ASHItemWeapon* EquippedWeapon;
    
    UPROPERTY(SaveGame)
    FName LastUsedWeapon;
    
    UPROPERTY(SaveGame)
    FName LastUsedMeleeWeapon;
    
    UPROPERTY(SaveGame)
    FName LastUsedRangedWeapon;
    
public:
    USHWeaponManageCmbSubcomp();

    UFUNCTION(Exec)
    void SHDebug_Character_Combat_UnequipWeapon();
    
    UFUNCTION(BlueprintCallable)
    bool RequestUnequipWeapon(bool Instant);
    
    UFUNCTION(BlueprintCallable)
    bool RequestEquipWeapon(FName WeaponDataRowName, bool Instant);
    
protected:
    UFUNCTION()
    void ProcessReleasePreloadedItemAssetsEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
    UFUNCTION()
    void ProcessPreloadItemAssetsEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
    UFUNCTION()
    void ProcessItemRemovedEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
    UFUNCTION()
    void ProcessCombatPoseChangedEvent(USHCharacterPlayCombatComponent* ComponentPtr);
    
    UFUNCTION()
    void OnUnequipWeaponEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnEquipWeaponEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnChangeWeaponUnequipEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnChangeWeaponUnequipBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnChangeWeaponEquipEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
    UFUNCTION()
    void OnChangeWeaponEquipBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasEquippedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    FName GetRangedWeaponToEquip(bool Next) const;
    
    UFUNCTION(BlueprintPure)
    FName GetNoWeaponDataTableRowName() const;
    
    UFUNCTION(BlueprintPure)
    FName GetMeleeWeaponToEquip(bool Next) const;
    
    UFUNCTION(BlueprintPure)
    FName GetLastUsedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    FName GetLastUsedRangedWeapon() const;
    
    UFUNCTION(BlueprintPure)
    FName GetLastUsedMeleeWeapon() const;
    
    UFUNCTION(BlueprintPure)
    FName GetEquippedWeaponName() const;
    
    UFUNCTION(BlueprintPure)
    ASHItemWeapon* GetEquippedWeapon() const;
    
};


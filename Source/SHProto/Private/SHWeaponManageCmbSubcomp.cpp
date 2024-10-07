#include "SHWeaponManageCmbSubcomp.h"

USHWeaponManageCmbSubcomp::USHWeaponManageCmbSubcomp() {
    this->EquippedWeapon = NULL;
}

void USHWeaponManageCmbSubcomp::SHDebug_Character_Combat_UnequipWeapon() {
}

bool USHWeaponManageCmbSubcomp::RequestUnequipWeapon(bool Instant) {
    return false;
}

bool USHWeaponManageCmbSubcomp::RequestEquipWeapon(FName WeaponDataRowName, bool Instant) {
    return false;
}

void USHWeaponManageCmbSubcomp::ProcessReleasePreloadedItemAssetsEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}

void USHWeaponManageCmbSubcomp::ProcessPreloadItemAssetsEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}

void USHWeaponManageCmbSubcomp::ProcessItemRemovedEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}

void USHWeaponManageCmbSubcomp::ProcessCombatPoseChangedEvent(USHCharacterPlayCombatComponent* ComponentPtr) {
}

void USHWeaponManageCmbSubcomp::OnUnequipWeaponEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHWeaponManageCmbSubcomp::OnEquipWeaponEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHWeaponManageCmbSubcomp::OnChangeWeaponUnequipEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHWeaponManageCmbSubcomp::OnChangeWeaponUnequipBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHWeaponManageCmbSubcomp::OnChangeWeaponEquipEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHWeaponManageCmbSubcomp::OnChangeWeaponEquipBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

bool USHWeaponManageCmbSubcomp::HasEquippedWeapon() const {
    return false;
}

FName USHWeaponManageCmbSubcomp::GetRangedWeaponToEquip(bool Next) const {
    return NAME_None;
}

FName USHWeaponManageCmbSubcomp::GetNoWeaponDataTableRowName() const {
    return NAME_None;
}

FName USHWeaponManageCmbSubcomp::GetMeleeWeaponToEquip(bool Next) const {
    return NAME_None;
}

FName USHWeaponManageCmbSubcomp::GetLastUsedWeapon() const {
    return NAME_None;
}

FName USHWeaponManageCmbSubcomp::GetLastUsedRangedWeapon() const {
    return NAME_None;
}

FName USHWeaponManageCmbSubcomp::GetLastUsedMeleeWeapon() const {
    return NAME_None;
}

FName USHWeaponManageCmbSubcomp::GetEquippedWeaponName() const {
    return NAME_None;
}

ASHItemWeapon* USHWeaponManageCmbSubcomp::GetEquippedWeapon() const {
    return NULL;
}



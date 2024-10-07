#include "SHCharacterPlayCombatComponent.h"
#include "Templates/SubclassOf.h"

USHCharacterPlayCombatComponent::USHCharacterPlayCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->ProjectileCollisionChannel = ECC_MAX;
    this->WeaponManageSettings = NULL;
    this->EnemiesManageSettings = NULL;
    this->DefenceSettings = NULL;
    this->StruggleSettings = NULL;
    this->RangedAutoAimSettings = NULL;
    this->StressSettings = NULL;
    this->OwnerCharacter = NULL;
}

bool USHCharacterPlayCombatComponent::SynchroReceiveDamage(const UObject* Object, const FPlayAnimationData AnimData) {
    return false;
}

void USHCharacterPlayCombatComponent::SHDebug_Character_Combat_ValuesDebug() {
}

void USHCharacterPlayCombatComponent::SHDebug_Character_Combat_DrawSecondaryTargetsDebug() {
}

void USHCharacterPlayCombatComponent::SHDebug_Character_Combat_DrawDebug() {
}

void USHCharacterPlayCombatComponent::SHDebug_Character_Combat_ActionsDebug() {
}

void USHCharacterPlayCombatComponent::SetAllCombatBlocked(const bool Blocked, const UObject* Object) {
}

float USHCharacterPlayCombatComponent::ReceiveDamage(float DamageValue, const UObject* Object, FVector HitDirection, const TSubclassOf<UDamageType> DamageType) {
    return 0.0f;
}

bool USHCharacterPlayCombatComponent::IsAllCombatBlocked() const {
    return false;
}

void USHCharacterPlayCombatComponent::InteruptCombat() {
}

bool USHCharacterPlayCombatComponent::GetDrawDebug() const {
    return false;
}

ESHCombatPoseType USHCharacterPlayCombatComponent::GetCombatPose() const {
    return ESHCombatPoseType::None;
}

ESHCombatInputModeEnum USHCharacterPlayCombatComponent::GetCombatInputMode() const {
    return ESHCombatInputModeEnum::None;
}

USHCombatSubcomponentBase* USHCharacterPlayCombatComponent::FindSubcomponentByClass(const TSubclassOf<USHCombatSubcomponentBase> SubcomponentClass) const {
    return NULL;
}



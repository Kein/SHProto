#include "SHMariaVerbalReactionsComponent.h"

USHMariaVerbalReactionsComponent::USHMariaVerbalReactionsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->MaxAllowedCoreDistance2D = 700.00f;
    this->OwnerAICharacter = NULL;
    this->bIsCompleted = false;
}

void USHMariaVerbalReactionsComponent::SetGeneralBlocked(const bool Blocked, const UObject* Object) {
}

void USHMariaVerbalReactionsComponent::SetDangerModeChangedCommentBlocked(const bool Blocked, const UObject* Object) {
}

void USHMariaVerbalReactionsComponent::ProcessPlayerRangedFireSuccess(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext) {
}

void USHMariaVerbalReactionsComponent::ProcessPlayerRangedAimPointingActorChanged(USHRangedCmbSubcomp* RangedCombatSubcomponent) {
}

void USHMariaVerbalReactionsComponent::ProcessPlayerMeleeSecondaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombatSubcomponent, ASHItemWeapon* ItemWeaponContext) {
}

void USHMariaVerbalReactionsComponent::ProcessPlayerMeleePrimaryAttackStarted(USHMeleeCmbSubcomp* MeleeCombatSubcomponent, ASHItemWeapon* ItemWeaponContext) {
}

void USHMariaVerbalReactionsComponent::MarkAsCompleted() {
}

bool USHMariaVerbalReactionsComponent::IsPlayerCombatStateConditionsMeet() const {
    return false;
}

bool USHMariaVerbalReactionsComponent::IsGeneralBlocked() const {
    return false;
}

bool USHMariaVerbalReactionsComponent::IsDangerModeChangedCommentBlocked() const {
    return false;
}

bool USHMariaVerbalReactionsComponent::IsCutsceneStateConditionsMeet() const {
    return false;
}

bool USHMariaVerbalReactionsComponent::IsCoreDistance2DConditionsMeet() const {
    return false;
}

bool USHMariaVerbalReactionsComponent::IsCompleted() const {
    return false;
}

bool USHMariaVerbalReactionsComponent::IsBehaviourStateConditionsMeet() const {
    return false;
}








bool USHMariaVerbalReactionsComponent::AreAllConditionsMeet() const {
    return false;
}



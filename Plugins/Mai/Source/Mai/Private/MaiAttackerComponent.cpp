#include "MaiAttackerComponent.h"
#include "Templates/SubclassOf.h"

UMaiAttackerComponent::UMaiAttackerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_CanMove = NULL;
    this->_CanShoot = NULL;
    this->_AutoCombatRange = true;
    this->_CombatRange = 500.00f;
    this->_TableOfAttacks = NULL;
    this->_AttacksTree = NULL;
    this->_BTAttacksRoot = NULL;
    this->_BlowImpactID = -1;
    this->_ChaseMode = false;
    this->_CurrentAttack = NULL;
    this->_AttackTarget = NULL;
    this->_Cooldown = 0.00f;
    this->_ForceMiss = false;
    this->_NextAttack = NULL;
}

bool UMaiAttackerComponent::TryApplyPhysicalDamage(AActor* enemy, FHitResult Hit) {
    return false;
}

bool UMaiAttackerComponent::TryApplyLogicalDamage(AActor* enemy, float Damage, int32 impactID) {
    return false;
}

void UMaiAttackerComponent::StopAttack(bool Aborted, FName attackName) {
}

void UMaiAttackerComponent::StartBlow(int32 impactID) {
}

void UMaiAttackerComponent::SelectAttack(AActor* enemy, FName attackName) {
}

void UMaiAttackerComponent::RunPureAttack(AActor* enemy, FName attackName) {
}

bool UMaiAttackerComponent::IsMissed(AActor* enemy) const {
    return false;
}

bool UMaiAttackerComponent::IsInAttackRange(AActor* enemy, float velocityScale) const {
    return false;
}

void UMaiAttackerComponent::InjectBT(bool inject) {
}

bool UMaiAttackerComponent::HasHit() const {
    return false;
}

bool UMaiAttackerComponent::HasAnyValidAttack(AActor* enemy, EMaiAttackRange Range, bool checkCone, bool checkToken) const {
    return false;
}

float UMaiAttackerComponent::GetCurrentAttackTime() const {
    return 0.0f;
}

AActor* UMaiAttackerComponent::GetCurrentAttackTarget() const {
    return NULL;
}

EMaiAttackRange UMaiAttackerComponent::GetAttackRangeType(AActor* enemy, FName attackName) const {
    return EMaiAttackRange::InRange;
}

UMaiAttackerComponent* UMaiAttackerComponent::getAttacker(AActor* Actor) {
    return NULL;
}

void UMaiAttackerComponent::ForceNextAttack(FName attackName) {
}

void UMaiAttackerComponent::ForceMiss(bool miss) {
}

UMaiAttack* UMaiAttackerComponent::FindBestAttack() const {
    return NULL;
}

void UMaiAttackerComponent::FillAttacks() {
}

void UMaiAttackerComponent::EndBlow(int32 impactID) {
}

void UMaiAttackerComponent::EnableFocusOnEnemy(bool Enable) {
}

void UMaiAttackerComponent::EnableChaseMode(bool Enable) {
}

void UMaiAttackerComponent::DebugAttack(AActor* enemy) {
}

void UMaiAttackerComponent::CleanUpAttack(FName attackName) {
}

void UMaiAttackerComponent::ChangeAttacksBT(UBehaviorTree* attacksTree) {
}

void UMaiAttackerComponent::BeginAttack() {
}

bool UMaiAttackerComponent::ApplyDamage(AActor* enemy, FHitResult Hit, TSubclassOf<UDamageType> DamageType, float Damage, bool singleDamage) {
    return false;
}



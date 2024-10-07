#include "MaiAttack.h"
#include "Templates/SubclassOf.h"

UMaiAttack::UMaiAttack() {
    this->_CheckAttackCone = false;
    this->_AttackDir = 0.00f;
    this->_AttackAngle = 60.00f;
    this->_TokenType = EMaiToken::TOKEN_0;
    this->_InitialStance = EMaiAttackInitialStance::Any;
    this->_Behavior = NULL;
    this->_PureAttackRange = 133.00f;
    this->_FocusCharging = 0.00f;
    this->_FocusFunc = EEasingFunc::EaseIn;
    this->_FocusMode = EMaiAttackFocus::AllTime;
    this->_SnapMode = EMaiAttackSnap::Off;
    this->_DodgeReaction = EMaiAttackDodgeReaction::On;
    this->_TimeToDodgeBeforeHit = 0.50f;
    this->_AllowDodgeReaction = true;
    this->_CheckImpactCone = false;
    this->_ImpactDir = 0.00f;
    this->_ImpactAngle = 70.00f;
    this->_ImpactRange = 100.00f;
    this->_DamageType = NULL;
    this->_CheckCooldown = false;
    this->_CooldownValue = 0.00f;
    this->_EndWithMontage = true;
    this->_RangedAttack = false;
    this->_EnabledFocus = false;
    this->_EnabledSnap = false;
    this->_DuringBlow = false;
    this->_AttackCommited = false;
    this->_AttackTime = 0.00f;
    this->_LastHitTime = -1.00f;
    this->_NextHitTime = -1.00f;
    this->_AttackStatus = EMaiAttackStatus::Undefined;
}

void UMaiAttack::SetSnapMode(EMaiAttackSnap Mode) {
}

void UMaiAttack::SetLogicalImpact(bool Enable, float Range, float Angle, float dir) {
}

void UMaiAttack::SetFocus(EMaiAttackFocus Mode, float charging) {
}

void UMaiAttack::SetDamage(TSubclassOf<UDamageType> DamageType, int32 Min, int32 Max) {
}

void UMaiAttack::SetCooldown(float Min, float Max) {
}

void UMaiAttack::SetBehavior(UBehaviorTree* Behavior, TArray<FGameplayTag> animTags) {
}

void UMaiAttack::SetAttackRange(float Min, float Max) {
}

void UMaiAttack::SetAttackCone(float Angle, float dir) {
}

void UMaiAttack::SetAttackCommited() {
}

void UMaiAttack::SetAllowDodgeReaction(bool allow) {
}


bool UMaiAttack::IsSnapping() const {
    return false;
}

bool UMaiAttack::IsFocusing() const {
    return false;
}

ACharacter* UMaiAttack::GetOwnerCH() const {
    return NULL;
}

AAIController* UMaiAttack::GetOwnerAI() const {
    return NULL;
}

AActor* UMaiAttack::GetOwnerActor() const {
    return NULL;
}

float UMaiAttack::GetImpactRange(int32 impactID) const {
    return 0.0f;
}

float UMaiAttack::GetImpactDir(int32 impactID) const {
    return 0.0f;
}

float UMaiAttack::GetImpactAngle(int32 impactID) const {
    return 0.0f;
}

TSubclassOf<UDamageType> UMaiAttack::GetDamageType(int32 impactID) const {
    return NULL;
}

float UMaiAttack::GetDamage(int32 impactID) const {
    return 0.0f;
}

AActor* UMaiAttack::GetAttackTarget() const {
    return NULL;
}

void UMaiAttack::GetAttackRange(float& Min, float& Max) const {
}

UMaiAttackerComponent* UMaiAttack::GetAttackerComponent() const {
    return NULL;
}

bool UMaiAttack::GetAllowDodgeReaction() const {
    return false;
}

void UMaiAttack::EventTickAttack_Implementation(AActor* Owner, float DeltaSeconds) {
}

void UMaiAttack::EventStopAttack_Implementation(AActor* Owner, bool Aborted) {
}




void UMaiAttack::EventBeginAttack_Implementation(AActor* Owner) {
}




void UMaiAttack::EndAttack(bool Abort) {
}

void UMaiAttack::EnableSnap() {
}

void UMaiAttack::EnableFocus() {
}

void UMaiAttack::DisableSnap() {
}

void UMaiAttack::DisableFocus() {
}



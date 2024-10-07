#include "SHEnemyHitReactionSelectionComponent.h"

USHEnemyHitReactionSelectionComponent::USHEnemyHitReactionSelectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HitReactionSelectionConfiguration = NULL;
    this->bPrintDebug = false;
}

void USHEnemyHitReactionSelectionComponent::StartHitResponseVariantCooldowns(ESHHitReactionSelectionHitResponseType InHitResponse, FName InVariantName, float InAdditionalDuration, bool InResetCurrent) {
}

void USHEnemyHitReactionSelectionComponent::StartHitResponseDefaultCooldownCounter(ESHHitReactionSelectionHitResponseType InHitResponse, float InCooldownTime, bool InResetCurrent) {
}

void USHEnemyHitReactionSelectionComponent::StartHitResponseCooldownCounter(FName InCounterName, float InCooldownTime, bool InResetCurrent) {
}

void USHEnemyHitReactionSelectionComponent::SetPrintHitReactionSelectionDebug(bool InPrintDebug) {
}

void USHEnemyHitReactionSelectionComponent::SetHitReactionSelectionConfiguration(USEnemyHitReactionSelection* InConfiguration) {
}

void USHEnemyHitReactionSelectionComponent::ResetAllActiveCountedHits() {
}

void USHEnemyHitReactionSelectionComponent::ResetActiveCountedHitsOfCounterName(FName InConsecutiveHitsCounterName) {
}

void USHEnemyHitReactionSelectionComponent::RemoveHitReactionsBlocker(TScriptInterface<ISHHitReactionSelectionHitReactionBlockerInterface> InHitReactionsBlocker) {
}

bool USHEnemyHitReactionSelectionComponent::IsUsingHitReactionSelectionConfiguration(USEnemyHitReactionSelection* InConfiguration) const {
    return false;
}

void USHEnemyHitReactionSelectionComponent::IncrementActiveCountedHitsByDamage(int32 InHitIdentifier, const UDamageType* InDamageType, FName InHitBoneName, int32 InHitBoneShapeIndex) {
}

float USHEnemyHitReactionSelectionComponent::GetHitResponseDefaultCooldownRemainingTime(ESHHitReactionSelectionHitResponseType InHitResponse) const {
    return 0.0f;
}

float USHEnemyHitReactionSelectionComponent::GetHitResponseCooldownRemainingTime(ESHHitReactionSelectionHitResponseType InHitResponse, FName InVariantName) const {
    return 0.0f;
}

float USHEnemyHitReactionSelectionComponent::GetHitResponseCooldownCounterRemainingTime(FName InCounterName) const {
    return 0.0f;
}

int32 USHEnemyHitReactionSelectionComponent::GetActiveCountedHitsOfTimerUsedByBoneGroup(FName InBonesGroupName) const {
    return 0;
}

int32 USHEnemyHitReactionSelectionComponent::GetActiveCountedHitsOfTimerUsedByBone(FName InBoneName, int32 InBoneShapeIndex) const {
    return 0;
}

int32 USHEnemyHitReactionSelectionComponent::GetActiveCountedHitsOfCounterName(FName InConsecutiveHitsCounterName) const {
    return 0;
}

FName USHEnemyHitReactionSelectionComponent::FindHitsCounterNameUsedByBonesGroup(FName InBonesGroupName) const {
    return NAME_None;
}

FName USHEnemyHitReactionSelectionComponent::FindHitsCounterNameUsedByBone(FName InBoneName, int32 InBoneShapeIndex) const {
    return NAME_None;
}

void USHEnemyHitReactionSelectionComponent::DecideHitResponse(float& OutDamageMultiplier, float& OutMaximumRemainingHealthFraction, ESHHitReactionSelectionHitResponseType& OutHitResponseType, FName& OutHitResponseVariant, float& OutHitResponseDurationLimit, FName& OutDeathVariant, TArray<FName>& OutResetConsecutiveHitCounters, const FVector& InDamageSourceLocation, const FHitResult& InHitInfo, const UDamageType* InDamageType, AActor* InDamageCauser, EMaiAggroStance InAggressionLevel, float InHealthFraction, const TArray<FSHHitReactionIdentifier>& InActiveHitReactions, const FSHEnemyHitReactionSelectionAllowedStates& InAllowedStates) {
}

bool USHEnemyHitReactionSelectionComponent::CountReceivedHitAndDecideResponse(float& OutDamageMultiplier, float& OutMaximumRemainingHealthFraction, ESHHitReactionSelectionHitResponseType& OutHitResponseType, FName& OutHitResponseVariant, float& OutHitResponseDurationLimit, FName& OutDeathVariant, const FVector& InDamageSourceLocation, const FHitResult& InHitInfo, const UDamageType* InDamageType, AActor* InDamageCauser, int32 InHitIdentifier, EMaiAggroStance InAggressionLevel, float InHealthFraction, const TArray<FSHHitReactionIdentifier>& InActiveHitReactions, const FSHEnemyHitReactionSelectionAllowedStates& InAllowedStates) {
    return false;
}

void USHEnemyHitReactionSelectionComponent::AddHitReactionsBlocker(TScriptInterface<ISHHitReactionSelectionHitReactionBlockerInterface> InHitReactionsBlocker) {
}



#include "SHHitReactionSubcomponent.h"

USHHitReactionSubcomponent::USHHitReactionSubcomponent() {
    this->LoadHitReactionsOnStart = true;
    this->bDebugPrint = false;
    this->LoadedHitReactionsSet = NULL;
    this->HitReactionTypePermissions.AddDefaulted(7);
    this->PermissionDelayedHitReactions.AddDefaulted(7);
    this->HitReactionStatesContext = NULL;
}

void USHHitReactionSubcomponent::SetHitReactionsSet(TSoftObjectPtr<USHHitReactionsSet> InHitReactionsSet) {
}

void USHHitReactionSubcomponent::SetHitReactionsDrawDebugEnabled(bool InDrawDebug) {
}

void USHHitReactionSubcomponent::SetChangeHitReactionsSetDelayed(bool bInChangeHitReactionsSetDelayed) {
}

bool USHHitReactionSubcomponent::IsUsingHitReactionsSet(TSoftObjectPtr<USHHitReactionsSet> InHitReactionsSet, bool InCheckDelayedSet) const {
    return false;
}

void USHHitReactionSubcomponent::HitReactionStateFinishing(USHHitReactionState* InHitReactionState) {
}

void USHHitReactionSubcomponent::HitReactionStateEnded(USHHitReactionState* InHitReactionState) {
}

bool USHHitReactionSubcomponent::HasHitReactionStatesOfTypeInProgress(ESHHitReactionResponseType InResponseType, bool InIncludeFinishing, bool InIncludeDelayed) const {
    return false;
}

bool USHHitReactionSubcomponent::HasHitReactionStatesOfTypeAndVariantInProgress(ESHHitReactionResponseType InResponseType, FName InResponseVariant, bool InIncludeFinishing, bool InIncludeDelayed) const {
    return false;
}

bool USHHitReactionSubcomponent::HasAnyOfHitReactionStatesOfTypeInProgress(bool InDeath, bool InKnockdown, bool InFalter, bool InStagger, bool InNormal, bool InTwitch, bool InIncludeFinishing, bool InIncludeDelayed) const {
    return false;
}

void USHHitReactionSubcomponent::FinishHitReactionsOfTypes(bool InDeath, bool InKnockdown, bool InFalter, bool InStagger, bool InNormal, bool InTwitch) {
}

void USHHitReactionSubcomponent::FinishHitReactionsOfTypeAndVariant(ESHHitReactionResponseType InResponseType, FName InResponseVariant) {
}

void USHHitReactionSubcomponent::FinishHitReactionsOfType(ESHHitReactionResponseType InResponseType) {
}

void USHHitReactionSubcomponent::FinishAllHitReactions() {
}

void USHHitReactionSubcomponent::FindAllHitReactionStateIdentifiers(TArray<FSHHitReactionIdentifier>& OutHitReactionIdentifiers, bool InIncludeFinishing, bool InIncludeDelayed) const {
}

void USHHitReactionSubcomponent::FindActiveHitReactionVariants(ESHHitReactionResponseType InResponseType, TArray<FName>& OutHitReactionVariants, bool InIncludeFinishing, bool InIncludeDelayed) const {
}

void USHHitReactionSubcomponent::EnableHitReactionTypeDelay(ESHHitReactionResponseType InResponseType, const TArray<FName>& InDontDelayVariants) {
}

void USHHitReactionSubcomponent::DisableHitReactionTypeDelay(ESHHitReactionResponseType InResponseType, bool InApplyDelayedHitReactions, const TArray<FName>& InDontApplyVariants) {
}

bool USHHitReactionSubcomponent::ChooseHitReaction(FSHHitReactionConfiguration& OutHitReactionConfiguration, const UDamageType* InDamageType, ESHHitReactionResponseType InResponseType, FName InResponseVariant, float InForce, ESHHitReactionHitType InHitType, FVector InSourceLocation, AActor* InDamageCauser, const FHitResult& HitInfo) const {
    return false;
}

bool USHHitReactionSubcomponent::ChooseAndApplyHitReaction(FSHHitReactionResult& OutHitReactionResult, const UDamageType* InDamageType, ESHHitReactionResponseType InResponseType, FName InResponseVariant, float InDurationLimit, float InForce, ESHHitReactionHitType InHitType, FVector InSourceLocation, AActor* InDamageCauser, const FHitResult& HitInfo) {
    return false;
}

void USHHitReactionSubcomponent::CancelHitReactionsOfTypes(bool InDeath, bool InKnockdown, bool InFalter, bool InStagger, bool InNormal, bool InTwitch, bool InInstant) {
}

void USHHitReactionSubcomponent::CancelHitReactionsOfTypeAndVariant(ESHHitReactionResponseType InResponseType, FName InResponseVariant, bool InInstant) {
}

void USHHitReactionSubcomponent::CancelHitReactionsOfType(ESHHitReactionResponseType InResponseType, bool InInstant) {
}

void USHHitReactionSubcomponent::CancelAllHitReactions(bool InInstant) {
}

bool USHHitReactionSubcomponent::AreHitReactionsWantingDisabledAI() const {
    return false;
}

bool USHHitReactionSubcomponent::AreHitReactionsPreventingControllerRotation() const {
    return false;
}

bool USHHitReactionSubcomponent::AreHitReactionsOfTypeDelayed(ESHHitReactionResponseType InResponseType) {
    return false;
}

bool USHHitReactionSubcomponent::ApplyHitReaction(FSHHitReactionResult& OutHitReactionResult, const UDamageType* InDamageType, ESHHitReactionResponseType InResponseType, FName InResponseVariant, float InDurationLimit, float InForce, ESHHitReactionHitType InHitType, FVector InSourceLocation, AActor* InDamageCauser, const FHitResult& HitInfo, const FSHHitReactionConfiguration& InHitReactionConfiguration) {
    return false;
}

bool USHHitReactionSubcomponent::ApplyArtificialHitReaction(FSHHitReactionResult& OutHitReactionResult, const FSHHitReactionArtificialHitConfiguration& InArtificialHitReactionConfiguration) {
    return false;
}



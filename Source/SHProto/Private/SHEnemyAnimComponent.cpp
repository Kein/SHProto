#include "SHEnemyAnimComponent.h"

USHEnemyAnimComponent::USHEnemyAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PhysicalAnimationProfileDA = NULL;
    this->ReviveAnimationsDA = NULL;
    this->HitReactionsSet = NULL;
    this->bDrawHitReactionsDebug = false;
    this->bPrintBonePhysicsStates = false;
    this->bDrawRagdollPose = false;
    this->DrawStreamedRagdollPoseDuration = 0.00f;
    this->bDrawBoneAppliedPhysicsForces = false;
    this->DrawBoneAppliedPhysicsForcesScale = 1.00f;
    this->bDrawBoneActivePhysicsForces = false;
    this->DrawBoneActivePhysicsForcesScale = 1.00f;
    this->OwnerCharacter = NULL;
    this->OwnerController = NULL;
    this->CachedHitReactionsSubcomponent = NULL;
}

void USHEnemyAnimComponent::SetLyingState(bool InIsLying, bool InIsTransforming) {
}

void USHEnemyAnimComponent::ProcessHitReactionStateStartedEvent(USHHitReactionSubcomponent* InHitReactionComponent, USHHitReactionState* InHitReactionState) {
}

void USHEnemyAnimComponent::ProcessHitReactionStateEndedEvent(USHHitReactionSubcomponent* InHitReactionComponent, USHHitReactionState* InHitReactionState) {
}

bool USHEnemyAnimComponent::ProcessHitReactionBonePhysicsRequestEvent(USHHitReactionSubcomponent* InHitReactionComponent, const FSHHitReactionResultBonePhysics& InBonePhysics) {
    return false;
}

void USHEnemyAnimComponent::ProcessEnemyBehaviorStanceChangedEvent(EMaiAggroStance NewAggroStance) {
}

void USHEnemyAnimComponent::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

bool USHEnemyAnimComponent::IsInTwitchState(bool InIncludeFinishing) const {
    return false;
}

bool USHEnemyAnimComponent::IsInStaggerState(bool InIncludeFinishing) const {
    return false;
}

bool USHEnemyAnimComponent::IsInNormalHitState(bool InIncludeFinishing) const {
    return false;
}

bool USHEnemyAnimComponent::IsInKnockdownState(bool InIncludeFinishing) const {
    return false;
}

bool USHEnemyAnimComponent::IsInFalterState(bool InIncludeFinishing) const {
    return false;
}

bool USHEnemyAnimComponent::IsInDeathState(bool InIncludeFinishing) const {
    return false;
}

void USHEnemyAnimComponent::GetActiveHitReactionVariants(ESHHitReactionResponseType InHitReactionType, TArray<FName>& OutHitReactionVariants) const {
}



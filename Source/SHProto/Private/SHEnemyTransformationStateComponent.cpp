#include "SHEnemyTransformationStateComponent.h"

USHEnemyTransformationStateComponent::USHEnemyTransformationStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bDebugDisplayState = false;
    this->ActiveTransformationState = NULL;
}

void USHEnemyTransformationStateComponent::SetIsOtherWorldEnemy(bool InEnemyIsOW) {
}

bool USHEnemyTransformationStateComponent::GetTransformationIsInProgress() const {
    return false;
}

float USHEnemyTransformationStateComponent::GetRemainingTransformationDuration() const {
    return 0.0f;
}

USHEnemyTransformationState* USHEnemyTransformationStateComponent::GetActiveTransformationState() const {
    return NULL;
}

void USHEnemyTransformationStateComponent::ApplyTransformationState(USHEnemyTransformationState* InTransformationState, float InOverrideDuration, float InOverrideHitReactionsChangeDelay, float InOverrideLyingChangeDelay, float InOverrideLyingChangeDuration) {
}



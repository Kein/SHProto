#include "SHTraversalObstacleExtendedComponent.h"

USHTraversalObstacleExtendedComponent::USHTraversalObstacleExtendedComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequiredViewDotProduct = 0.50f;
    this->bSecureView = true;
    this->bSecureViewDurationAsAnimLengthMul = true;
    this->SecuredViewDuration = 0.75f;
    this->bUseFocusTracking = true;
    this->AnimMontagePlayer = NULL;
    this->TeleportToOnPlayingEndComponent = NULL;
}

void USHTraversalObstacleExtendedComponent::ProcesTraversalAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHTraversalObstacleExtendedComponent::ProcessTraversalAnimBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHTraversalObstacleExtendedComponent::ProcessMovementSnapFinish(bool bWasCompleted) {
}

ESHTraversalObstacleExtendedStage USHTraversalObstacleExtendedComponent::GetCurrentStage() const {
    return ESHTraversalObstacleExtendedStage::None;
}



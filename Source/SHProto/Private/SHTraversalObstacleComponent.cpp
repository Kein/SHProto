#include "SHTraversalObstacleComponent.h"

USHTraversalObstacleComponent::USHTraversalObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldUnequipWeapon = true;
    this->bEnableFlashlightPlainSocketMode = false;
    this->RequiredViewDotProduct = 0.50f;
    this->bSecureView = true;
    this->bSecureViewDurationAsAnimLengthMul = true;
    this->SecuredViewDuration = 0.75f;
    this->bUseFocusTracking = true;
    this->bUseStaticCameraAnimAnchor = false;
    this->AnimMontagePlayer = NULL;
}

void USHTraversalObstacleComponent::RemoveFriendActor(AActor* InActor) {
}

void USHTraversalObstacleComponent::RegisterBelowFlashlightLookAtComponent(USceneComponent* InLookAtComponent) {
}

void USHTraversalObstacleComponent::RegisterAboveFlashlightLookAtComponent(USceneComponent* InLookAtComponent) {
}

void USHTraversalObstacleComponent::ProcessTraversalAnimEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHTraversalObstacleComponent::ProcessTraversalAnimBlendingOut(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

void USHTraversalObstacleComponent::AddFriendActor(AActor* InActor) {
}



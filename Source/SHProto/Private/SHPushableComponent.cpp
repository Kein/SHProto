#include "SHPushableComponent.h"

USHPushableComponent::USHPushableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bBlockedOnBeginPlay = false;
    this->bDisableForward = false;
    this->bDisableBackward = false;
    this->bDisableRight = false;
    this->bDisableLeft = false;
    this->LookAtRotationSnapDuration = 0.50f;
    this->LookAtRotationSnapPitch = -20.00f;
    this->bApplyViewRotationLimits = true;
    this->bHasStaticYawRotation = true;
    this->PossibleMovementsDebugSize = 125.00f;
    this->bManageOwnerTick = true;
    this->OwnerMesh = NULL;
    this->ProximitySphere = NULL;
    this->InteractingCharacter = NULL;
    this->LinkedAnimGraphInstance = NULL;
}

void USHPushableComponent::TeleportAbsolute(const FVector& InWorldLoc) {
}

void USHPushableComponent::SetComponentBlocked(const bool Blocked, const UObject* Object) {
}

void USHPushableComponent::ProcessSlideSnapEnd(bool WasCompleted) {
}

void USHPushableComponent::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void USHPushableComponent::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void USHPushableComponent::ProcessMovementSnapEnd(bool WasCompleted) {
}

void USHPushableComponent::ProcessLookAtRotationAbsoluteEnd(bool WasCompleted) {
}

void USHPushableComponent::ProcessInteractingCharacterReceiveDamage(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHPushableComponent::ProcessInteractingCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHPushableComponent::ProcessAnimInstStoppedMovement(USHPushingObjectAnimInstance* AnimInst) {
}

void USHPushableComponent::ProcessAnimInstStartedMovement(USHPushingObjectAnimInstance* AnimInst) {
}

void USHPushableComponent::ProcessAnimInstStartedInteraction(USHPushingObjectAnimInstance* AnimInst) {
}

void USHPushableComponent::ProcessAnimInstFiredFinishInteraction(USHPushingObjectAnimInstance* AnimInst) {
}

void USHPushableComponent::ProcessAnimInstFinishedInteraction(USHPushingObjectAnimInstance* AnimInst) {
}

void USHPushableComponent::ManualFinishRequest() {
}

bool USHPushableComponent::IsInteractingCharacterStandingOnOwnerMesh() const {
    return false;
}

bool USHPushableComponent::IsInInteraction() const {
    return false;
}

bool USHPushableComponent::IsComponentBlocked() const {
    return false;
}

void USHPushableComponent::Interact(ASHCharacterPlay* InInteractingCharacter) {
}

void USHPushableComponent::Initialize(USphereComponent* InProximitySphere, UMeshComponent* InMainMesh) {
}

UMeshComponent* USHPushableComponent::GetOwnerMesh() const {
    return NULL;
}

USHPushingObjectAnimInstance* USHPushableComponent::GetLinkedAnimGraphInstance() const {
    return NULL;
}

ASHCharacterPlay* USHPushableComponent::GetInteractingCharacter() const {
    return NULL;
}



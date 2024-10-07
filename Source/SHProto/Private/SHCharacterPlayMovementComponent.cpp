#include "SHCharacterPlayMovementComponent.h"

USHCharacterPlayMovementComponent::USHCharacterPlayMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseControllerDesiredRotation = true;
    this->bOrientRotationToMovement = true;
    this->MovementObstacleDetection = NULL;
    this->IncreaseMaxSpeedInterpSpeed = 20.00f;
    this->DecreaseMaxSpeedInterpSpeed = 10.00f;
    this->MinVelocityToPlaySprintShake = 150.00f;
    this->MinWaterDepthToBeInWaterState = 50.00f;
    this->Settings = NULL;
    this->OwnerCharacter = NULL;
    this->PlayingSprintCameraShake = NULL;
    this->AssignedSprintCameraShakeClass = NULL;
    this->PushableComponent = NULL;
    this->VehicleMovementProcessor = NULL;
}

void USHCharacterPlayMovementComponent::TelportAbsoluteWithDefaultView(const FTransform& InTransform) {
}

void USHCharacterPlayMovementComponent::TeleportRelativelyToComponents(USceneComponent* FirstAnchor, USceneComponent* SecondAnchor) {
}

void USHCharacterPlayMovementComponent::TeleportRelativelyToActors(AActor* FirstAnchor, AActor* SecondAnchor) {
}

void USHCharacterPlayMovementComponent::TeleportRelatively(const FTransform& FirstAnchor, const FTransform& SecondAnchor) {
}

void USHCharacterPlayMovementComponent::TeleportAbsoluteWithView(const FTransform& InTransform, const FRotator& InViewRotation) {
}

void USHCharacterPlayMovementComponent::TeleportAbsolute(const FTransform& InTransform) {
}

void USHCharacterPlayMovementComponent::StopRotateInPlaceImmediately() {
}

USHOperationEvents* USHCharacterPlayMovementComponent::SlideSnapAbsolute(const FVector Location, const float Duration, const UObject* Object, TArray<AActor*> InCollisionIgnoredActors, UCurveFloat* Curve) {
    return NULL;
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_ValuesDebug() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_SpamMovementInputDebug() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_SpamMovementImpacts() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_SlideSnapDrawDebug() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_RotationSnapDrawDebug() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_PushableDrawDebug() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_MovementSnapDrawDebug() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_ForceSprint() {
}

void USHCharacterPlayMovementComponent::SHDebug_Character_Movement_DrawDebug() {
}

void USHCharacterPlayMovementComponent::SetSprintBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetRotateInPlaceCustomAllowed(const bool bInAllowed, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetRotateInPlaceBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetPhysWalkingBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetMovementScale(const float Scale, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetMovementBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetIsOnStairs(bool OnStairs) {
}

void USHCharacterPlayMovementComponent::SetDisableToggleSprintAutoEnd(const bool InValue, const UObject* Object) {
}

void USHCharacterPlayMovementComponent::SetControllerYawRotationMatchingBlocked(const bool Blocked, const UObject* Object) {
}

USHOperationEvents* USHCharacterPlayMovementComponent::RotationSnapAbsoluteStatic(const FRotator WorldRotation, const float Duration, const UObject* Object, UCurveFloat* Curve) {
    return NULL;
}

USHOperationEvents* USHCharacterPlayMovementComponent::RotationSnapAbsolute(const FVector Location, const float Duration, const UObject* Object, UCurveFloat* Curve) {
    return NULL;
}

USHOperationEvents* USHCharacterPlayMovementComponent::MovementSnapAbsolute(const FVector Location, const float Timeout, const FSHMovementSnapConfig Config, const UObject* Object) {
    return NULL;
}

bool USHCharacterPlayMovementComponent::IsSprinting() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsSprintBlockedBy(const UObject* Object) const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsSprintBlocked() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsRotateInPlaceBlocked() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsPhysWalkingBlocked() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsOnStairs() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsMovingOnSlope() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsMovementBlockedBy(const UObject* Object) const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsMovementBlocked() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsInWater() const {
    return false;
}

bool USHCharacterPlayMovementComponent::IsControllerYawRotationMatchingBlocked() const {
    return false;
}

void USHCharacterPlayMovementComponent::HandleReceiveDamageEvent(USHCharacterPlayCombatComponent* CombatComp) {
}

float USHCharacterPlayMovementComponent::GetLastSlopeAngleDeg() const {
    return 0.0f;
}

FVector USHCharacterPlayMovementComponent::GetLastInputValue() const {
    return FVector{};
}

ESHInteriorExteriorStateEnum USHCharacterPlayMovementComponent::GetInteriorExteriorState() const {
    return ESHInteriorExteriorStateEnum::Exterior;
}

FVector USHCharacterPlayMovementComponent::GetFakedVelocity() const {
    return FVector{};
}

void USHCharacterPlayMovementComponent::ClearMovementScale(const UObject* Object) {
}



#include "SHDoorMovementBaseComponent.h"

USHDoorMovementBaseComponent::USHDoorMovementBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ManagedDoorMesh = NULL;
    this->ManagedPlaneSideDetection = NULL;
    this->ManagedDoorLockComponent = NULL;
    this->ManagedProximityDetectionSphere = NULL;
    this->ManagedAboveHandleSpot = NULL;
    this->ManagedBelowHandleSpot = NULL;
    this->ActiveProximitySHActor = NULL;
}

void USHDoorMovementBaseComponent::SetIsManagedByCutscene(bool InEnable, const UObject* Object) {
}

void USHDoorMovementBaseComponent::ProcessProximitySHActorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void USHDoorMovementBaseComponent::ProcessProximitySHActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void USHDoorMovementBaseComponent::ProcessMeshHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit) {
}

bool USHDoorMovementBaseComponent::IsManagedByCutscene() const {
    return false;
}

float USHDoorMovementBaseComponent::GetLastDoorVelocity() const {
    return 0.0f;
}

FVector USHDoorMovementBaseComponent::GetDoorTraceHalfSize() const {
    return FVector{};
}

float USHDoorMovementBaseComponent::GetCurrentDoorVelocity() const {
    return 0.0f;
}

ESHDoorStateEnum USHDoorMovementBaseComponent::GetCurrentDoorState() const {
    return ESHDoorStateEnum::Undefined;
}



#include "SHMovingWheelStaticMeshComponent.h"

USHMovingWheelStaticMeshComponent::USHMovingWheelStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InterpSpeedMultiplier = 1.00f;
    this->InverseRotationDirection = false;
}

void USHMovingWheelStaticMeshComponent::ProcessPushingStarted(USHPushableComponent* InComponent) {
}

void USHMovingWheelStaticMeshComponent::ProcessPushingFinishedOrInterupted(USHPushableComponent* InComponent) {
}



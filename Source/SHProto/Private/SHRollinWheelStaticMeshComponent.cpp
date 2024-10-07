#include "SHRollinWheelStaticMeshComponent.h"

USHRollinWheelStaticMeshComponent::USHRollinWheelStaticMeshComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RollingWheelRadius = 9.00f;
}

void USHRollinWheelStaticMeshComponent::SetEnabled(USHPushableComponent* DummyComp) {
}

void USHRollinWheelStaticMeshComponent::SetDisabled(USHPushableComponent* DummyComp) {
}



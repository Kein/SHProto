#include "SHPendulumComponent.h"

USHPendulumComponent::USHPendulumComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->Radius = 100.00f;
    this->DragFactor = 0.00f;
    this->BeginPlayAngle = 0.00f;
    this->bClampAngles = false;
    this->AngleSaved = 0.00f;
    this->ReceiverCurrentAngularVelocity = 0.00f;
}

void USHPendulumComponent::SetFreeze(const bool bInFreeze) {
}

void USHPendulumComponent::AddAngularVelocity(const float InVelocity) {
}



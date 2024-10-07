#include "SHItemExeCameraManagerComponent.h"

USHItemExeCameraManagerComponent::USHItemExeCameraManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseStartCameraAnimation = true;
    this->StartCameraAnimationDuration = 1.00f;
    this->bEnableCameraMovement = false;
    this->MovementMaxSpeed = 80.00f;
    this->MovementAcceleration = 0.75f;
    this->MovementDeceleration = 1.00f;
    this->bEnableCameraZoom = false;
    this->ZoomFocialLength = 40.00f;
    this->ZoomInTime = 1.00f;
    this->ZoomInCurve = NULL;
    this->ZoomOutTime = 1.00f;
    this->ZoomOutCurve = NULL;
}

void USHItemExeCameraManagerComponent::SetCameraZoomBlocked(const bool Blocked, const UObject* Object) {
}

void USHItemExeCameraManagerComponent::SetCameraMovementBlocked(const bool Blocked, const UObject* Object) {
}

bool USHItemExeCameraManagerComponent::IsCameraZoomBlocked() const {
    return false;
}

bool USHItemExeCameraManagerComponent::IsCameraMovementBlocked() const {
    return false;
}



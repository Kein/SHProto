#include "SHFakeMirrorComponent.h"

USHFakeMirrorComponent::USHFakeMirrorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistanceFromCamera = 0.00f;
    this->ClippingPlaneOffset = 0.00f;
    this->DrawContent = true;
    this->DoNotMirror = false;
    this->DoNotClip = false;
    this->FrameCapture2DID = -1;
    this->DoNotCheckVisibility = false;
    this->GIShowFlags = true;
    this->AllowFakeInputs = false;
    this->FakePositionWhenNotVisible = false;
    this->FakeCameraFOV = 90.00f;
    this->MirrorCameraFOV = 0.00f;
}

float USHFakeMirrorComponent::GetRenderFactor() const {
    return 0.0f;
}



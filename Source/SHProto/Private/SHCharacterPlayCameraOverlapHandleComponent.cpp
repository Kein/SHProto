#include "SHCharacterPlayCameraOverlapHandleComponent.h"

USHCharacterPlayCameraOverlapHandleComponent::USHCharacterPlayCameraOverlapHandleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinimumHiddenTime = 0.10f;
    this->OwnerCharacterPlay = NULL;
}

void USHCharacterPlayCameraOverlapHandleComponent::SHDebug_Character_CameraOverlapHandler_ValuesDebug() {
}



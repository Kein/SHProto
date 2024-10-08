#include "SHCameraActor.h"
#include "SHCameraComponent.h"

ASHCameraActor::ASHCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHCameraComponent>(TEXT("CameraComponent"))) {
    // FIXME
}

USHCameraComponent* ASHCameraActor::GetSHCameraComponent() const {
    return NULL;
}



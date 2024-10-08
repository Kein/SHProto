#include "SHCineCameraActor.h"
#include "SHCineCameraComponent.h"

ASHCineCameraActor::ASHCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHCineCameraComponent>(TEXT("CameraComponent"))) {
// FIXME
}

USHCineCameraComponent* ASHCineCameraActor::GetSHCineCameraComponent() const {
    return NULL;
}



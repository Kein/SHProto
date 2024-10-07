#include "SHCineCameraActor.h"
#include "SHCineCameraComponent.h"

ASHCineCameraActor::ASHCineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHCineCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

USHCineCameraComponent* ASHCineCameraActor::GetSHCineCameraComponent() const {
    return NULL;
}



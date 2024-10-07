#include "SHCameraActor.h"
#include "SHCameraComponent.h"

ASHCameraActor::ASHCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USHCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

USHCameraComponent* ASHCameraActor::GetSHCameraComponent() const {
    return NULL;
}



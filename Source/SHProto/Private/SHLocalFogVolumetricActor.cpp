#include "SHLocalFogVolumetricActor.h"
#include "Components/SceneComponent.h"

ASHLocalFogVolumetricActor::ASHLocalFogVolumetricActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bUseCameraInsteadOfPlayerLocation = true;
}

void ASHLocalFogVolumetricActor::SetEnabled(const bool bInEnabled, const UObject* Object) {
}


bool ASHLocalFogVolumetricActor::IsEnabled() const {
    return false;
}



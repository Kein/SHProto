#include "DebugCameraActor.h"
#include "Components/SceneComponent.h"
#include "DebugCameraComponent.h"

ADebugCameraActor::ADebugCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->CameraComponent = CreateDefaultSubobject<UDebugCameraComponent>(TEXT("CameraComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->FriendlyScreenshotName = TEXT("Screenshot");
    this->CameraComponent->SetupAttachment(RootComponent);
}



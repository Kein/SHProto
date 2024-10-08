#include "SHCameraAnimationExecutive.h"
#include "Components/SceneComponent.h"
#include "SHCineCameraComponent.h"

ASHCameraAnimationExecutive::ASHCameraAnimationExecutive(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // this->Camera = CreateDefaultSubobject<USHCineCameraComponent>(TEXT("Camera"));
    // this->Camera->SetupAttachment(RootComponent);
}

void ASHCameraAnimationExecutive::SetLockCharacterAttachmentTransform(const FTransform& InTransform) {
}

void ASHCameraAnimationExecutive::SetLockCharacterAttachment(bool InLockCharacterAttachment) {
}

void ASHCameraAnimationExecutive::SetActorToAttachTo(AActor* InActorToAttachTo) {
}

void ASHCameraAnimationExecutive::OnSequenceStopped() {
}



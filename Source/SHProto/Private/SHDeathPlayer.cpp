#include "SHDeathPlayer.h"
#include "Components/SceneComponent.h"

ASHDeathPlayer::ASHDeathPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bPlayerCharacterEnsureNoEquippedWeapon = true;
}

void ASHDeathPlayer::HandleCameraAnimStopped() {
}

void ASHDeathPlayer::HandleCameraAnimBlendOut() {
}



#include "SHCutscenePlayer.h"
#include "Components/CapsuleComponent.h"

ASHCutscenePlayer::ASHCutscenePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeleportTarget = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TeleportTarget"));
    this->MariaTeleportTarget = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MariaTeleportTarget"));
    this->bHideMariaDuringCutscene = true;
    this->bTeleportMariaAfterCutscene = true;
    this->bResetAggressiveEnemiesOnActivate = true;
    this->bResetCameraToDefaultRotation = true;
    this->AfterCutsceneLightingBlendTime = 0.00f;
    this->DynamicResolutionMinScreenPercentage = 0.00f;
    this->MariaTeleportTarget->SetupAttachment(RootComponent);
    this->TeleportTarget->SetupAttachment(RootComponent);
}



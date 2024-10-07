#include "PlayGameMode.h"
#include "BeingFootstepManagerComponent.h"
#include "PlayGameModeController.h"
#include "PlayTimeComponent.h"
#include "AnalyticsGameplayRecorderComponent.h"
#include "AnalyticsPerformanceRecorderComponent.h"
#include "SHAkAmbientSoundManagerComponent.h"
#include "SHAkComponentsPoolManagerComponent.h"
#include "SHAkPortalManagerComponent.h"
#include "SHAkSpatialAudioVolumeManagerComponent.h"
#include "SHAsyncLoaderComponent.h"
#include "SHDoorsManagerComponent.h"
#include "SHFXManagerComponent.h"
#include "SHFlickeringLightManagerComponent.h"
#include "SHFogManager.h"
#include "SHFreezingManagerComponent.h"
#include "SHGameplayControllerEffectsManager.h"
#include "SHInteractionIconManagerComponent.h"
#include "SHRainManagerComponent.h"
#include "SHSpawnPoint.h"
#include "SHTimeManagerComponent.h"
#include "SHWaterManagerComponent.h"

APlayGameMode::APlayGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnPointClass = ASHSpawnPoint::StaticClass();
    this->BaseGameModeController = CreateDefaultSubobject<UPlayGameModeController>(TEXT("GameModeController"));
    this->TimeManager = CreateDefaultSubobject<USHTimeManagerComponent>(TEXT("TimeManager"));
    this->IconManager = CreateDefaultSubobject<USHInteractionIconManagerComponent>(TEXT("IconManager"));
    this->AsyncLoader = CreateDefaultSubobject<USHAsyncLoaderComponent>(TEXT("AsyncLoader"));
    this->AnalyticsGameplayRecorder = CreateDefaultSubobject<UAnalyticsGameplayRecorderComponent>(TEXT("AnalyticsGameplayRecorder"));
    this->AnalyticsPerformanceRecorder = CreateDefaultSubobject<UAnalyticsPerformanceRecorderComponent>(TEXT("AnalyticsPerformanceRecorder"));
    this->GameplayControllerEffectsManager = CreateDefaultSubobject<USHGameplayControllerEffectsManager>(TEXT("GameplayControllerEffectsManager"));
    this->FootstepManager = CreateDefaultSubobject<UBeingFootstepManagerComponent>(TEXT("FootstepManager"));
    this->SHFXManager = CreateDefaultSubobject<USHFXManagerComponent>(TEXT("FXManager"));
    this->SHFogManager = CreateDefaultSubobject<USHFogManager>(TEXT("FogManager"));
    this->SHWaterManager = CreateDefaultSubobject<USHWaterManagerComponent>(TEXT("WaterManager"));
    this->SHRainManager = CreateDefaultSubobject<USHRainManagerComponent>(TEXT("RainManager"));
    this->SHFreezingManager = CreateDefaultSubobject<USHFreezingManagerComponent>(TEXT("FreezingManager"));
    this->AkAmbientSoundManager = CreateDefaultSubobject<USHAkAmbientSoundManagerComponent>(TEXT("AkAmbientSoundManager"));
    this->AkComponentsPoolManager = CreateDefaultSubobject<USHAkComponentsPoolManagerComponent>(TEXT("AkComponentsPoolManager"));
    this->AkSpatialAudioVolumeManager = CreateDefaultSubobject<USHAkSpatialAudioVolumeManagerComponent>(TEXT("AkSpatialAudioVolumeManager"));
    this->AkPortalManager = CreateDefaultSubobject<USHAkPortalManagerComponent>(TEXT("AkPortalManager"));
    this->FlickeringLightManager = CreateDefaultSubobject<USHFlickeringLightManagerComponent>(TEXT("FlickeringLightManager"));
    this->DoorsManager = CreateDefaultSubobject<USHDoorsManagerComponent>(TEXT("DoorsManager"));
    this->PlayTimeComponent = CreateDefaultSubobject<UPlayTimeComponent>(TEXT("PlayTime"));
}

void APlayGameMode::SHDebug_World_DumpAllLevels() {
}

void APlayGameMode::SHDebug_World_DumpAllActors() {
}

bool APlayGameMode::IsReadyToPlay() const {
    return false;
}

void APlayGameMode::EndFakeLoading() {
}



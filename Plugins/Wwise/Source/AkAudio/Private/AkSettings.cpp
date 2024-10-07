#include "AkSettings.h"

UAkSettings::UAkSettings() {
    this->MaxSimultaneousReverbVolumes = 4;
    this->bSoundBanksTransfered = true;
    this->bAssetsMigrated = true;
    this->bProjectMigrated = true;
    this->bAutoConnectToWAAPI = false;
    this->DefaultOcclusionCollisionChannel = ECC_Visibility;
    this->OcclusionIgnorePawnAttachedActors = true;
    this->DefaultFitToGeometryCollisionChannel = ECC_WorldStatic;
    this->GlobalDecayAbsorption = 0.50f;
    this->SplitSwitchContainerMedia = true;
    this->SplitMediaPerFolder = false;
    this->UseEventBasedPackaging = false;
    this->CommandletCommitMessage = TEXT("Unreal Wwise Sound Data auto-generation");
    this->DefaultAssetCreationPath = TEXT("/Game/WwiseAudio");
    this->AudioRouting = EAkUnrealAudioRouting::Custom;
    this->bWwiseSoundEngineEnabled = true;
    this->bWwiseAudioLinkEnabled = false;
    this->bAkAudioMixerEnabled = false;
    this->AskedToUseNewAssetManagement = false;
    this->bEnableMultiCoreRendering = false;
    this->MigratedEnableMultiCoreRendering = true;
    this->FixupRedirectorsDuringMigration = false;
    this->MaxObstructionOcclusionPortalTraceDist2D = 4000.00f;
    this->MusicSwitchesFolderPaths.AddDefaulted(2);
}



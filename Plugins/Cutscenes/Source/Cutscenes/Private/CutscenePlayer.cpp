#include "CutscenePlayer.h"
#include "Components/SceneComponent.h"

ACutscenePlayer::ACutscenePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->LevelSequenceActor = NULL;
    this->SoundTrackComponent = NULL;
    this->MusicTrack = NULL;
    this->StopMusicTrackWithCutscene = false;
    this->SkipAudioEvent = NULL;
    this->bPlayOnlyOnce = true;
    this->bStopAllActiveDialogsAtStart = true;
    this->bTeleportPlayerAfterCutscene = false;
    this->UseCustomCharacterBlendInTime = false;
    this->CustomCharacterBlendInTime = 1.00f;
    this->UseCustomCharacterBlendOutTime = false;
    this->CustomCharacterBlendOutTime = 1.00f;
    this->DisableCharacterCollisions = true;
    this->DisableCharacterFootIK = true;
    this->OverrideLightingChannelsUsingProxyMesh = true;
    this->ForceLOD0OnCharacters = true;
    this->PropagateSkipToNextCutscene = false;
    this->WaitForAllAssetsToStreamInAtCutsceneStart = false;
    this->bPlayedOnce = false;
    this->StreamingSkipConditionsMet = false;
    this->WaitForStreamingRequestsCompletion = false;
    this->LevelStreamingManager = NULL;
}

bool ACutscenePlayer::UnbindCharacterWithProxy(ACharacter* Character) {
    return false;
}

void ACutscenePlayer::OnLevelSequenceStop() {
}

void ACutscenePlayer::OnLevelSequencePlayReverse() {
}

void ACutscenePlayer::OnLevelSequencePlay() {
}

void ACutscenePlayer::OnLevelSequencePause() {
}

void ACutscenePlayer::OnLevelSequenceFinished() {
}

void ACutscenePlayer::OnLevelSequenceCameraCut(UCameraComponent* CameraComponent) {
}

bool ACutscenePlayer::IsPlaying() const {
    return false;
}

bool ACutscenePlayer::IsCharacterBindedWithProxy(ACharacter* Character) {
    return false;
}

bool ACutscenePlayer::IsAlreadyPlayedOnce() const {
    return false;
}

void ACutscenePlayer::Deactivate() {
}

bool ACutscenePlayer::Activate() {
    return false;
}



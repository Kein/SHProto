#include "DialogSpeaker.h"

UDialogSpeaker::UDialogSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_IsAPlayerSpeaker = false;
    this->_VoiceOnPad = false;
    this->_IsDisabledByCS = false;
    this->_UI = NULL;
}

void UDialogSpeaker::SetIsPlayerSpeaker(bool is) {
}

void UDialogSpeaker::RemoveVoiceParameter(FName Name, float InterpolationTime) {
}

void UDialogSpeaker::PlayTalkInEditor() {
}

void UDialogSpeaker::playTalk(FLatentActionInfo Info) {
}

bool UDialogSpeaker::IsPlayerSpeaker() const {
    return false;
}

FDialogTalkID UDialogSpeaker::GetTalkID() const {
    return FDialogTalkID{};
}

float UDialogSpeaker::GetDistanceToPlayer() const {
    return 0.0f;
}

USceneComponent* UDialogSpeaker::GetCurrentVoice() const {
    return NULL;
}

bool UDialogSpeaker::CanStartTalk() const {
    return false;
}

void UDialogSpeaker::AddVoiceParameter(FName Name, float Value, float InterpolationTime) {
}



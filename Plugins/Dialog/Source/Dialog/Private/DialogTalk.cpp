#include "DialogTalk.h"

UDialogTalk::UDialogTalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_CurrentSpeaker = NULL;
    this->_CurrentVoiceOver = NULL;
    this->_ActiveDialog = 0;
    this->_CurrentLine = 0;
    this->_PauseAfterLine = 0.00f;
    this->_TimeToDistanceCheck = 0.00f;
    this->_State = ETalkState::INVALID;
    this->_VoiceState = EVoiceState::NONE;
    this->_AutoDestroy = true;
    this->_DialogData = NULL;
    this->_UI = NULL;
    this->_MaxDistance = 1000.00f;
    this->_DistanceCheckPeriod = 1.00f;
    this->_ParentTalk = NULL;
    this->_SubTalk = NULL;
    this->_ChoiceObserver = NULL;
    this->_LoadedVO = NULL;
}

void UDialogTalk::UpdateChoices() {
}

void UDialogTalk::Suspend() {
}

void UDialogTalk::Stop(UObject* WorldContext) {
}

bool UDialogTalk::Skip() {
    return false;
}

void UDialogTalk::Resume() {
}

bool UDialogTalk::PlayTalkFromLine(const FDialogLine& dialogLineID, UObject* WorldContext) {
    return false;
}

bool UDialogTalk::playTalk(const FDialogDialog& DialogID, UObject* WorldContext) {
    return false;
}

bool UDialogTalk::PlayLine(const FDialogLine& dialogLineID, UObject* WorldContext) {
    return false;
}

void UDialogTalk::Pause() {
}

void UDialogTalk::OnSubTalkFinished(bool Completed) {
}

void UDialogTalk::OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) {
}

bool UDialogTalk::IsFinishedOrSuspended() const {
    return false;
}

bool UDialogTalk::IsFinished() const {
    return false;
}

bool UDialogTalk::HasSpeaker(const UDialogSpeaker* speaker) const {
    return false;
}

FDialogLine UDialogTalk::GetResumeableLine() const {
    return FDialogLine{};
}

uint8 UDialogTalk::GetPriority() const {
    return 0;
}

UDialogSpeaker* UDialogTalk::GetCurrentSpeaker() const {
    return NULL;
}

void UDialogTalk::getAllSpeakers(TArray<UDialogSpeaker*>& speakers) const {
}

UDialogSpeaker* UDialogTalk::FindSpeaker(FDialogEntity speakerID) const {
    return NULL;
}

UDialogSpeaker* UDialogTalk::FindPlayerSpeaker() const {
    return NULL;
}

UDialogSpeaker* UDialogTalk::FindNonPlayerSpeaker() const {
    return NULL;
}

void UDialogTalk::Choose(int32 choice, bool endIfFail) {
}



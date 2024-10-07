#include "SHAnimMontagePlayer.h"

USHAnimMontagePlayer::USHAnimMontagePlayer() {
    this->OwnerComponent = NULL;
    this->InputData = NULL;
    this->CurrentMontage = NULL;
}

bool USHAnimMontagePlayer::StopRequest(const float StopBlendoutTime) {
    return false;
}

bool USHAnimMontagePlayer::ResumeRequest() {
    return false;
}

bool USHAnimMontagePlayer::PlayRequest(const FPlayAnimationData& AnimData, FVector BlendSpaceInput) {
    return false;
}

bool USHAnimMontagePlayer::PlayOrOverwriteRequest(const float StopBlendoutTime, const FPlayAnimationData& AnimData, FVector BlendSpaceInput) {
    return false;
}

bool USHAnimMontagePlayer::PauseRequest() {
    return false;
}

bool USHAnimMontagePlayer::OverwriteRequest(const float StopBlendoutTime, const FPlayAnimationData& AnimData, FVector BlendSpaceInput) {
    return false;
}

void USHAnimMontagePlayer::OnAnyMontageEnd(UAnimMontage* Montage, bool bInterrupted) {
}

void USHAnimMontagePlayer::OnAnyMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

bool USHAnimMontagePlayer::IsPlaying() const {
    return false;
}

float USHAnimMontagePlayer::GetPosition() const {
    return 0.0f;
}

FPlayAnimationData USHAnimMontagePlayer::GetPlayAnimationData() const {
    return FPlayAnimationData{};
}

UAnimSequenceBase* USHAnimMontagePlayer::GetInputData() const {
    return NULL;
}

UAnimMontage* USHAnimMontagePlayer::GetCurrentMontage() const {
    return NULL;
}

bool USHAnimMontagePlayer::ChangeSectionRequest(const FName NewSectionName, const float NewSectionBlendInTime, const float OldSectionBlendOutTime) {
    return false;
}



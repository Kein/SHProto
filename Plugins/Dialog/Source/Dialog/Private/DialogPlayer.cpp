#include "DialogPlayer.h"

UDialogPlayer::UDialogPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDialogPlayer::PlayTalkInEditor() {
}

UDialogTalk* UDialogPlayer::playTalk() {
    return NULL;
}

FDialogTalkID UDialogPlayer::GetTalkID() const {
    return FDialogTalkID{};
}

bool UDialogPlayer::CanStartTalk() const {
    return false;
}



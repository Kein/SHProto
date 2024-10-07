#include "DialogSubtitles.h"

UDialogSubtitles::UDialogSubtitles(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_MarkMissingSpeakers = true;
    this->_MaxDistance = 2000.00f;
}

FText UDialogSubtitles::GetLocalizedSpeakerName(FDialogEntity entity) {
    return FText::GetEmpty();
}

void UDialogSubtitles::ChangeVisibility(bool Show) {
}

void UDialogSubtitles::AddSubtitle(int32 Index, FDialogLine line) {
}



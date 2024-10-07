#include "DialogSubtitlesLineWidget.h"

UDialogSubtitlesLineWidget::UDialogSubtitlesLineWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Speaker_rtx = NULL;
    this->Text_rtx = NULL;
    this->Text_border = NULL;
    this->GameTextsConfig = NULL;
}

void UDialogSubtitlesLineWidget::SetText4Test(FText NewSpeaker, FText NewText, FLinearColor Color, const FSubtitleData& Config) {
}

void UDialogSubtitlesLineWidget::SetText(int32 _ID, FText NewSpeaker, FText NewText, FColor Color) {
}

bool UDialogSubtitlesLineWidget::HasText() const {
    return false;
}

bool UDialogSubtitlesLineWidget::HasId(int32 _ID) const {
    return false;
}

void UDialogSubtitlesLineWidget::ClearText() {
}



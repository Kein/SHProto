#include "MainMenuWidget.h"

UMainMenuWidget::UMainMenuWidget() {
    this->bIsFocusable = true;
    this->SwitchUserKeys.AddDefaulted(2);
    this->LoadingFadeOut_anim = NULL;
}

void UMainMenuWidget::ToMainMenu() {
}

void UMainMenuWidget::ShowSystemHelp() {
}

void UMainMenuWidget::SelectSlot() {
}

void UMainMenuWidget::ReturnToGame() {
}

void UMainMenuWidget::QuitGame() {
}

void UMainMenuWidget::PopulateSlots(bool WithScreenshots, bool SortByDate, bool SaveMode) {
}




void UMainMenuWidget::LoadSavedGame(int32 SlotIndex, UMovieConfig* Movie, float NonSkippableLen) {
}

void UMainMenuWidget::LoadingFadedOut() {
}

bool UMainMenuWidget::IsSystemHelpSupported() {
    return false;
}

bool UMainMenuWidget::IsSlotListNotEmpty() const {
    return false;
}

bool UMainMenuWidget::IsShowUserInfo() const {
    return false;
}

bool UMainMenuWidget::HasUserSlots() const {
    return false;
}

bool UMainMenuWidget::HasSlots() const {
    return false;
}

FSaveSlotInfo UMainMenuWidget::GetTheNewestSlotInfo(bool WithScreenShot) const {
    return FSaveSlotInfo{};
}

int32 UMainMenuWidget::GetSlotsCount() const {
    return 0;
}

int32 UMainMenuWidget::GetSlotIndex(int32 Index) const {
    return 0;
}

void UMainMenuWidget::FadeOutForLoading() {
}

void UMainMenuWidget::ContinueGame(UMovieConfig* Movie, float NonSkippableLen) {
}

void UMainMenuWidget::BeginNewGame(UMovieConfig* Movie, float NonSkippableLen) {
}



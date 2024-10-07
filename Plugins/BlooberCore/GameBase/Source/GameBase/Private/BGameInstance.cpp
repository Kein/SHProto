#include "BGameInstance.h"

UBGameInstance::UBGameInstance() {
    this->MainGameConfig = NULL;
    this->IgnoreSaveLevelTransforms = true;
    this->GlobalCollection = NULL;
    this->GlobalSettingsCollection = NULL;
    this->SaveWidget = NULL;
    this->RebindableInput = NULL;
    this->GlobalProperties = NULL;
    this->InputModeManager = NULL;
    this->LastScreenshotTexture = NULL;
}

bool UBGameInstance::WasPadConnected() const {
    return false;
}

bool UBGameInstance::WasMouseMoved() const {
    return false;
}

void UBGameInstance::SetLastScreenshotTexture(UTexture2D* Texture, bool PrepareLoadingScreen) {
}

bool UBGameInstance::ReloadGame(bool bSaveOnDisk, const FString& Title, bool GrabScreenShot, UMovieConfig* Movie, float UnskipableLen) {
    return false;
}

bool UBGameInstance::IsWorldTravelFinished() const {
    return false;
}

bool UBGameInstance::IsPlayingFromMainMenu() const {
    return false;
}

bool UBGameInstance::IsPadActive() const {
    return false;
}

bool UBGameInstance::IsMouseActive() const {
    return false;
}

bool UBGameInstance::IsKeyboardActive() const {
    return false;
}

bool UBGameInstance::IsGameSuspended() const {
    return false;
}

bool UBGameInstance::IsGameDeactivated() const {
    return false;
}

URebindableInput* UBGameInstance::GetRebindableInput() {
    return NULL;
}

UPlayerProfile* UBGameInstance::GetPlayerProfile() {
    return NULL;
}

UTexture2D* UBGameInstance::GetLastScreenshotTexture() const {
    return NULL;
}

void UBGameInstance::BackToMainMenu() {
}



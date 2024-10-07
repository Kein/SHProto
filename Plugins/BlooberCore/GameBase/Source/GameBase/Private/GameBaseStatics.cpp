#include "GameBaseStatics.h"

UGameBaseStatics::UGameBaseStatics() {
}

bool UGameBaseStatics::WasMouseMoved(UObject* WorldContextObject) {
    return false;
}

void UGameBaseStatics::WaitForAllSaveAsyncOperations(UObject* WorldContextObject) {
}

void UGameBaseStatics::StopSound(UAkAudioEvent* Sound) {
}

void UGameBaseStatics::ShowSystemHelp() {
}

void UGameBaseStatics::ShowMouseCursor(APlayerController* PlayerController) {
}

bool UGameBaseStatics::ShadersUseHighQualityBlock(UObject* WorldContextObject) {
    return false;
}

void UGameBaseStatics::SetMouseCursorVisibility(APlayerController* PlayerController, bool Show) {
}

void UGameBaseStatics::SetInputModeUIOnly(UObject* WorldContextObject, APlayerController* PlayerController, bool NewShowMouseCursor, EMouseLockMode MouseLockMode) {
}

void UGameBaseStatics::SetInputModeGameOnly(UObject* WorldContextObject, APlayerController* PlayerController, bool NewShowMouseCursor, bool ConsumeCaptureMouseDown) {
}

void UGameBaseStatics::SetInputModeGameAndUI(UObject* WorldContextObject, APlayerController* PlayerController, bool NewShowMouseCursor, EMouseLockMode MouseLockMode, bool HideCursorDuringCapture) {
}

void UGameBaseStatics::SetGamePaused(UObject* WorldContextObject, const bool IsPaused) {
}

void UGameBaseStatics::SetDefaultGamma(UObject* WorldContextObject) {
}

void UGameBaseStatics::SetActualGamma(UObject* WorldContextObject) {
}

void UGameBaseStatics::SaveUserProfile(UObject* WorldContextObject) {
}

bool UGameBaseStatics::SaveSlotDataExist(UObject* WorldContextObject, int32 SlotIndex) {
    return false;
}

void UGameBaseStatics::SavePersistentGameDate(UObject* WorldContextObject) {
}

void UGameBaseStatics::SaveGame(UObject* WorldContextObject, const FString& Title, bool GrabScreenShot) {
}

void UGameBaseStatics::ResumeDynamicResolution() {
}

void UGameBaseStatics::PostWiseEvent(UAkAudioEvent* Event) {
}

void UGameBaseStatics::PlaySound(UAkAudioEvent* Sound) {
}

void UGameBaseStatics::PauseDynamicResolution() {
}

void UGameBaseStatics::MakeQuickSave(UObject* WorldContextObject, const FString& Title, bool GrabScreenShot) {
}

void UGameBaseStatics::MakePersistentGameDateDirty(UObject* WorldContextObject) {
}

void UGameBaseStatics::MakeFullSave(UObject* WorldContextObject, int32 SlotIndex, const FString& Title, bool GrabScreenShot, bool AllowAsyncOperation) {
}

bool UGameBaseStatics::IsSystemHelpSupported() {
    return false;
}

bool UGameBaseStatics::IsSwitchUserSupported(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsPadConnected(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsPadActive(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsNEOOrScorpio() {
    return false;
}

bool UGameBaseStatics::IsMoviePlayerActive() {
    return false;
}

bool UGameBaseStatics::IsMouseActive(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsKeyboardActive(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsGameSuspended(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsGamePaused(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsGameDeactivated(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsGameCompletelyInstalled(UObject* WorldContextObject) {
    return false;
}

bool UGameBaseStatics::IsConsoleMenu() {
    return false;
}

void UGameBaseStatics::HideMouseCursor(APlayerController* PlayerController) {
}

FTimespan UGameBaseStatics::GetTimeSinceLastSave(UObject* WorldContextObject) {
    return FTimespan{};
}

UTexture2D* UGameBaseStatics::GetSavedScreenShot(UObject* WorldContextObject, int32 SlotIndex) {
    return NULL;
}

int32 UGameBaseStatics::GetRevisionVersionNumber() {
    return 0;
}

FString UGameBaseStatics::GetProjectVersionString() {
    return TEXT("");
}

UPlaythroughPersistentData* UGameBaseStatics::GetPlaythroughPersistentGameData(UObject* WorldContextObject) {
    return NULL;
}

UPlayerProfile* UGameBaseStatics::GetPlayerProfile(UObject* WorldContextObject) {
    return NULL;
}

FString UGameBaseStatics::GetPlayerName(UObject* WorldContextObject) {
    return TEXT("");
}

UPersistentSaveData* UGameBaseStatics::GetPersistentGameData(UObject* WorldContextObject) {
    return NULL;
}

FDateTime UGameBaseStatics::GetLastSaveTime(UObject* WorldContextObject) {
    return FDateTime{};
}

EGameBaseInputDevice UGameBaseStatics::GetInputDevice(UObject* WorldContextObject) {
    return EGameBaseInputDevice::MouseOrKeyboard;
}

FString UGameBaseStatics::GetBuildStreamName() {
    return TEXT("");
}

FString UGameBaseStatics::GetBuildPackageName() {
    return TEXT("");
}

ABGameModeBase* UGameBaseStatics::GetBaseGameMode(UObject* WorldContextObject) {
    return NULL;
}

UBGameInstance* UGameBaseStatics::GetBaseGameInstance(UObject* WorldContextObject) {
    return NULL;
}

UTexture2D* UGameBaseStatics::GetActualSavedScreenShot(UObject* WorldContextObject) {
    return NULL;
}

void UGameBaseStatics::FlushSave(UObject* WorldContextObject, int32 SlotIndex, const FString& Title, bool ApplyCurrentTime, bool PreserveSlotIndex) {
}

void UGameBaseStatics::FlushPartialSave(UObject* WorldContextObject) {
}

void UGameBaseStatics::AutoSave(UObject* WorldContextObject, const FString& Title, bool GrabScreenShot, bool Flush) {
}



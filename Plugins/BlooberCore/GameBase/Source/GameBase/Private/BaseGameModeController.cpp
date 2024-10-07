#include "BaseGameModeController.h"

UBaseGameModeController::UBaseGameModeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoHideLostPadWidget = true;
    this->AlarmPopupOpenEvent = NULL;
    this->AlarmPopupCloseEvent = NULL;
    this->PauseGameStartEvent = NULL;
    this->PauseGameCloseEvent = NULL;
}



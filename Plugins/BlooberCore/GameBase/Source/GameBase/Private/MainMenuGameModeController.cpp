#include "MainMenuGameModeController.h"

UMainMenuGameModeController::UMainMenuGameModeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMenuOpenEvent = NULL;
    this->MainMenuCloseEvent = NULL;
}



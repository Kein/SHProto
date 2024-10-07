#include "PlayGameModeController.h"

UPlayGameModeController::UPlayGameModeController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InGameMenuOpenEvent = NULL;
    this->InGameMenuCloseEvent = NULL;
}



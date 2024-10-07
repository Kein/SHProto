#include "MainMenuGameMode.h"
#include "MainMenuGameModeController.h"

AMainMenuGameMode::AMainMenuGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BaseGameModeController = CreateDefaultSubobject<UMainMenuGameModeController>(TEXT("GameModeController"));
    this->MenuFadeTime = 2.50f;
}



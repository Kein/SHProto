#include "BGameModeBase.h"
#include "GameModeMenuController.h"

ABGameModeBase::ABGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnPointClass = NULL;
    this->MenuController = CreateDefaultSubobject<UGameModeMenuController>(TEXT("GameMenuController"));
    this->BaseGameModeController = NULL;
}

void ABGameModeBase::ShowInGameMenu() {
}



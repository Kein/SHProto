#include "BaseSaveGame.h"

UBaseSaveGame::UBaseSaveGame() {
    this->bIsHeaderLoaded = false;
    this->bIsFullyLoaded = false;
    this->BodyDataCrc = 0;
}



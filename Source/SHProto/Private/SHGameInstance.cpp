#include "SHGameInstance.h"

USHGameInstance::USHGameInstance() {
    this->bDeathReload = false;
    this->LastDeathReason = EGameOverCause::CharacterDeath;
    this->DebugManagerWidgetClass = NULL;
    this->DebugManager = NULL;
    this->WWisePadHeadPhonesRTPCPtr = NULL;
}


void USHGameInstance::BeginCustomLevel(const FStreamableLevelHandle& LevelHandle) {
}



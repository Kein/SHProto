#include "SHCharacterPlayAnimActionExe.h"

USHCharacterPlayAnimActionExe::USHCharacterPlayAnimActionExe() {
    this->bBlockMovement = false;
    this->bBlockViewRotation = false;
    this->bAllowCombatActions = false;
}

void USHCharacterPlayAnimActionExe::ProcessCharacterReceivedHitEvent(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHCharacterPlayAnimActionExe::ProcessCharacterCombatInputModeChangedEvent(USHCharacterPlayCombatComponent* CombatComp) {
}



#include "SHItemUseExecutive.h"

USHItemUseExecutive::USHItemUseExecutive() {
    this->bUseCustomSetupData = false;
    this->bAllowCombatInterupt = false;
    this->LookAtAlphaBlendInSpeed = 5.00f;
    this->LookAtAlphaBlendOutSpeed = 5.00f;
    this->bAllowHoldingWeapons = true;
    this->bAllowSprint = false;
    this->bUseCustomMovementData = false;
    this->OwnerCharacter = NULL;
}

bool USHItemUseExecutive::WasBreakRequested() const {
    return false;
}





ACharacter* USHItemUseExecutive::GetOwnerCharacter() const {
    return NULL;
}

FSHItemDataStruct USHItemUseExecutive::GetItemData() const {
    return FSHItemDataStruct{};
}

FName USHItemUseExecutive::GetItemContext() const {
    return NAME_None;
}

ASHItemBase* USHItemUseExecutive::GetItem(int32 ForIndex) const {
    return NULL;
}

void USHItemUseExecutive::Finish(ESHUseFinishType FinishType) {
}




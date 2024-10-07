#include "SHCombatSubcomponentBase.h"

USHCombatSubcomponentBase::USHCombatSubcomponentBase() {
    this->OwnerCharacter = NULL;
    this->OwnerComponent = NULL;
}

USHCharacterPlayCombatComponent* USHCombatSubcomponentBase::GetOwningComponent() const {
    return NULL;
}

AActor* USHCombatSubcomponentBase::GetOwningActor() const {
    return NULL;
}

ACharacter* USHCombatSubcomponentBase::GetOwnerCharacter() const {
    return NULL;
}



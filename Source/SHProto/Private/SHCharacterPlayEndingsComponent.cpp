#include "SHCharacterPlayEndingsComponent.h"

USHCharacterPlayEndingsComponent::USHCharacterPlayEndingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->Settings = NULL;
    this->OwnerCharacter = NULL;
}

void USHCharacterPlayEndingsComponent::SHDebug_Character_Endings_ValuesDebug() {
}



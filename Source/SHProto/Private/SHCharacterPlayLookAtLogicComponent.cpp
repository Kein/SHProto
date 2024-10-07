#include "SHCharacterPlayLookAtLogicComponent.h"

USHCharacterPlayLookAtLogicComponent::USHCharacterPlayLookAtLogicComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterLookAtTypesPriorities.AddDefaulted(2);
    this->CharacterPlay = NULL;
}

void USHCharacterPlayLookAtLogicComponent::SHDebug_Character_LookAt_ValuesDebug() {
}

void USHCharacterPlayLookAtLogicComponent::SHDebug_Character_LookAt_DrawDebug() {
}



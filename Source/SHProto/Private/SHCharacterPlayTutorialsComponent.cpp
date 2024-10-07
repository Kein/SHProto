#include "SHCharacterPlayTutorialsComponent.h"

USHCharacterPlayTutorialsComponent::USHCharacterPlayTutorialsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->ConsumeQueueDelayValue = 1.00f;
    this->TutorialsDatabase = NULL;
}

void USHCharacterPlayTutorialsComponent::SHDebug_Character_Tutorials_ValuesDebug() {
}

void USHCharacterPlayTutorialsComponent::SHDebug_Character_Tutorials_ResetRegisterActions() {
}

void USHCharacterPlayTutorialsComponent::SHDebug_Character_Tutorials_RequestShowTutorial(int32 TutorialEnumAsInt) {
}

void USHCharacterPlayTutorialsComponent::ProcessTutorialWidgetHideEvent() {
}

bool USHCharacterPlayTutorialsComponent::IsTutorialActionRegistered(const ESHGameplayTutorialEnum InTutorialEnum) const {
    return false;
}



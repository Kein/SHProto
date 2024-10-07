#include "SHCharacterPlayStatisticsComponent.h"

USHCharacterPlayStatisticsComponent::USHCharacterPlayStatisticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->Settings = NULL;
    this->OwnerCharacter = NULL;
    this->RegisteredEnding = ESHEndingType::Invalid;
}

void USHCharacterPlayStatisticsComponent::StartWatchingEverEnabledRadio() {
}

void USHCharacterPlayStatisticsComponent::SHDebug_Character_Statistics_ValuesDebug() {
}



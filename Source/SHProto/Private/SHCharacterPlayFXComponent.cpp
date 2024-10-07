#include "SHCharacterPlayFXComponent.h"

USHCharacterPlayFXComponent::USHCharacterPlayFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PukePuddleDamageSettings = NULL;
    this->FrozenBreathSettings = NULL;
    this->WaterInteractionSettings = NULL;
    this->VisualHPSettings = NULL;
    this->RainWettingSettings = NULL;
    this->DirtLayerSettings = NULL;
    this->AcidLayerSettings = NULL;
    this->SwarmSettings = NULL;
}

void USHCharacterPlayFXComponent::SHDebug_Character_FX_ValuesDebug() {
}

void USHCharacterPlayFXComponent::SHDebug_Character_FX_Rain_EncompassesPointDebug() {
}

void USHCharacterPlayFXComponent::SHDebug_Character_FX_Rain_DrawDebug() {
}



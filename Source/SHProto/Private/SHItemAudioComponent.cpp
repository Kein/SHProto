#include "SHItemAudioComponent.h"

USHItemAudioComponent::USHItemAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GrabSound = NULL;
    this->HideSound = NULL;
    this->FlipSound = NULL;
    this->InvestigateSound = NULL;
    this->SavedSwitchValue = NULL;
}



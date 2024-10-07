#include "WwiseAudioLinkComponent.h"

UWwiseAudioLinkComponent::UWwiseAudioLinkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Settings = NULL;
    this->Sound = NULL;
    this->AudioComponent = NULL;
}



#include "AkWaveComponent.h"

UAkWaveComponent::UAkWaveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventName = TEXT("WaveAudioSource");
    this->_Wave = NULL;
}

void UAkWaveComponent::StopWave() {
}

void UAkWaveComponent::PlayWave() {
}



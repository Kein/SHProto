#include "MaiNoiseEmitter.h"

UMaiNoiseEmitter::UMaiNoiseEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Aggro = 1.00f;
    this->_NoiseRange = 0.00f;
    this->_Range = 0.00f;
    this->_MaxRange = 0.00f;
    this->_Loudness = 1.00f;
    this->_Period = 0.33f;
    this->_NoiseTag = TEXT("NoiseEmitter");
}

void UMaiNoiseEmitter::StartNoise() {
}

void UMaiNoiseEmitter::MakeNoise() {
}

void UMaiNoiseEmitter::MakeLongNoise(float Duration) {
}

void UMaiNoiseEmitter::EndNoise() {
}



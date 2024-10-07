#include "BeingNoiseLevelStat.h"

UBeingNoiseLevelStat::UBeingNoiseLevelStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_NoiseLevel = 1.00f;
}

void UBeingNoiseLevelStat::SetNoiseLevel(float Value) {
}

float UBeingNoiseLevelStat::IsNoiseMuted(FName NoiseTag) const {
    return 0.0f;
}

float UBeingNoiseLevelStat::GetNoiseLevel() const {
    return 0.0f;
}



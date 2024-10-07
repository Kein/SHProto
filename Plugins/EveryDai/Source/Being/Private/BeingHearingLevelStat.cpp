#include "BeingHearingLevelStat.h"

UBeingHearingLevelStat::UBeingHearingLevelStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_HearingLevel = 1.00f;
    this->_HearableNoiseLevel = 0.00f;
    this->_IgnoreNoisesFromList = true;
}

void UBeingHearingLevelStat::SetHearingLevel(float Value) {
}

void UBeingHearingLevelStat::SetHearableNoiseLevel(float Value) {
}

float UBeingHearingLevelStat::GetHearingLevelTheActor(AActor* Actor) const {
    return 0.0f;
}

float UBeingHearingLevelStat::GetHearingLevel() const {
    return 0.0f;
}

float UBeingHearingLevelStat::GetHearableNoiseLevel() const {
    return 0.0f;
}



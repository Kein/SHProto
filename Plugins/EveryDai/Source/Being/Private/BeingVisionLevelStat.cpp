#include "BeingVisionLevelStat.h"

UBeingVisionLevelStat::UBeingVisionLevelStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_VisionLevel = 1.00f;
}

void UBeingVisionLevelStat::SetVisionLevel(float Value) {
}

float UBeingVisionLevelStat::GetVisionLevelTheActor(AActor* Actor) const {
    return 0.0f;
}

float UBeingVisionLevelStat::GetVisionLevel() const {
    return 0.0f;
}

float UBeingVisionLevelStat::GetLevelOfVisionTheActor_Implementation(AActor* Actor) const {
    return 0.0f;
}



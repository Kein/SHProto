#include "BeingAggroLevelStat.h"

UBeingAggroLevelStat::UBeingAggroLevelStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_AggroLevel = 1.00f;
}

void UBeingAggroLevelStat::SetAggroLevel(float Value) {
}

float UBeingAggroLevelStat::GetPersonalizedAggroLevel(AActor* Other) const {
    return 0.0f;
}


float UBeingAggroLevelStat::GetAggroLevel() const {
    return 0.0f;
}



#include "BeingMaxWalkSpeedStat.h"

UBeingMaxWalkSpeedStat::UBeingMaxWalkSpeedStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_StancePriority = 255;
    this->_WalkingStance = EBeingWalkingStance::UNDEFINED;
}

void UBeingMaxWalkSpeedStat::SetWalkingStance(EBeingWalkingStance stance, uint8 Priority) {
}

void UBeingMaxWalkSpeedStat::OverrideSpeedValues(const TMap<EBeingWalkingStance, float>& maxSpeeds) {
}

EBeingWalkingStance UBeingMaxWalkSpeedStat::GetWalkingStance() const {
    return EBeingWalkingStance::UNDEFINED;
}

float UBeingMaxWalkSpeedStat::GetTotalMaxSpeed() const {
    return 0.0f;
}



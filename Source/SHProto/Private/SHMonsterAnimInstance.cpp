#include "SHMonsterAnimInstance.h"
#include "SHMonsterAnimInstanceStateData.h"

USHMonsterAnimInstance::USHMonsterAnimInstance() {
    this->AnimInstanceStateDataClass = USHMonsterAnimInstanceStateData::StaticClass();
    this->aggroStance = EMaiAggroStance::Neutral;
    this->bIsOtherWorldEnemy = false;
    this->bIsLying = false;
    this->bIsTransforming = false;
}

void USHMonsterAnimInstance::SetEnemyReviveSeizuresToBePlayed(float InSeizuresCount) {
}

void USHMonsterAnimInstance::SetEnemyIsOtherWorld(bool InEnemyIsOW) {
}









bool USHMonsterAnimInstance::IsTransformingToStanding() const {
    return false;
}

bool USHMonsterAnimInstance::IsTransformingToLying() const {
    return false;
}

bool USHMonsterAnimInstance::IsStanding(bool IncludeTransformingInto, bool IncludeTransformingOutOf) const {
    return false;
}

bool USHMonsterAnimInstance::IsOtherWorldEnemy() const {
    return false;
}

bool USHMonsterAnimInstance::IsLying(bool IncludeTransformingInto, bool IncludeTransformingOutOf) const {
    return false;
}

float USHMonsterAnimInstance::GetRemainingReviveSeizuresCount() const {
    return 0.0f;
}

bool USHMonsterAnimInstance::DecrementReviveSeizure(float InReduceSeizuresCount) {
    return false;
}



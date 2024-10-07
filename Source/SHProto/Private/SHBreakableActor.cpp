#include "SHBreakableActor.h"

ASHBreakableActor::ASHBreakableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bManualDamageTaking = false;
    this->MaxAllowedDistanceToHitPoint2D = 125.00f;
    this->MinRequiredDirectionsDotProduct = 0.93f;
    this->SecondaryTargetType = ESHSecondaryTargetType::Undefined;
    this->bIsBroken = false;
}



void ASHBreakableActor::ManualDamageTaken() {
}

bool ASHBreakableActor::IsBroken() const {
    return false;
}

void ASHBreakableActor::AssignRuntimeSecondaryAttackRowName(const FName& InRowName) {
}



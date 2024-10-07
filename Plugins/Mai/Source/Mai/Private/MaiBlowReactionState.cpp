#include "MaiBlowReactionState.h"
#include "Templates/SubclassOf.h"

UMaiBlowReactionState::UMaiBlowReactionState() {
    this->_HitCounter = 0;
    this->_HitResetCooldown = 10.00f;
    this->_CaptureBlowMSG = false;
}

void UMaiBlowReactionState::ResetHitCounter() {
}

void UMaiBlowReactionState::OverrideChanceArray(TArray<uint8> _Chances) {
}



void UMaiBlowReactionState::OnBlowStartMSG(UMaiMessage* msg, AActor* attacker, TSubclassOf<UDamageType> damageClass) {
}

void UMaiBlowReactionState::IncreaseHits() {
}

uint8 UMaiBlowReactionState::GetChance() const {
    return 0;
}



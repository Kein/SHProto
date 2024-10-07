#include "SHDPSCounter.h"

USHDPSCounter::USHDPSCounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CounterHistoryDurationLimit = 10.00f;
}

void USHDPSCounter::ResetDPS() {
}

void USHDPSCounter::ProcessOwnerTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

float USHDPSCounter::GetRecentTotalDamage(float HistoryPeriodSeconds) const {
    return 0.0f;
}

float USHDPSCounter::GetRecentDPS(float HistoryPeriodSeconds) const {
    return 0.0f;
}



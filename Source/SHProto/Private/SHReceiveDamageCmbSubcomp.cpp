#include "SHReceiveDamageCmbSubcomp.h"
#include "Templates/SubclassOf.h"

USHReceiveDamageCmbSubcomp::USHReceiveDamageCmbSubcomp() {
}

bool USHReceiveDamageCmbSubcomp::SynchroReceiveDamage(const UObject* Object, const FPlayAnimationData& AnimData) {
    return false;
}

void USHReceiveDamageCmbSubcomp::SetReceiveStunDamageBlocked(const bool Blocked, const UObject* Object) {
}

void USHReceiveDamageCmbSubcomp::SetReceiveSoftDamageBlocked(const bool Blocked, const UObject* Object) {
}

void USHReceiveDamageCmbSubcomp::SetReceiveContinuousDamageBlocked(const bool Blocked, const UObject* Object) {
}

float USHReceiveDamageCmbSubcomp::ReceiveDamage(float DamageValue, const UObject* Object, const FVector& HitDirection, const TSubclassOf<UDamageType>& DamageType) {
    return 0.0f;
}

void USHReceiveDamageCmbSubcomp::OnReceiveDamageEnd(UAnimMontage* Montage, ESHAnimEndType AnimEndType) {
}

bool USHReceiveDamageCmbSubcomp::IsReceiveStunDamageBlocked() const {
    return false;
}

bool USHReceiveDamageCmbSubcomp::IsReceiveSoftDamageBlocked() const {
    return false;
}

bool USHReceiveDamageCmbSubcomp::IsReceiveContinuousDamageBlocked() const {
    return false;
}



#include "SHFXBloodPuddleSubcomp.h"

USHFXBloodPuddleSubcomp::USHFXBloodPuddleSubcomp() {
    this->Settings = NULL;
    this->CurrentBloodPuddle = NULL;
}

void USHFXBloodPuddleSubcomp::SetBloodPuddleBlocked(const bool IsBlock, const UObject* Object) {
}

void USHFXBloodPuddleSubcomp::ProcessOwnerRevive() {
}

void USHFXBloodPuddleSubcomp::ProcessOwnerDead() {
}

void USHFXBloodPuddleSubcomp::ProcessOwnerDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

bool USHFXBloodPuddleSubcomp::IsBloodPuddleBlockedBy(const UObject* Object) const {
    return false;
}

bool USHFXBloodPuddleSubcomp::IsBloodPuddleBlocked() const {
    return false;
}

ASHBloodPuddle* USHFXBloodPuddleSubcomp::GetCurrentBloodPuddle() const {
    return NULL;
}




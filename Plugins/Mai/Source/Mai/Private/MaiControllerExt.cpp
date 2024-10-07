#include "MaiControllerExt.h"

AMaiControllerExt::AMaiControllerExt(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Party = EMaiParty::NONE;
    this->_ArchEnemy = NULL;
    this->_ForcedEnemy = NULL;
    this->_FightingEnemy = NULL;
    this->_ClearChaseWhenPerceived = false;
    this->_IgnoreAll = false;
    this->_BBArchEnemy = TEXT("Target");
    this->_BBInstigator = TEXT("Instigator");
    this->_BBAlertLocation = TEXT("AlertLocation");
    this->_BBChaseLocation = TEXT("ChaseLocation");
}

void AMaiControllerExt::UpdateEnemyData() {
}

void AMaiControllerExt::SetParty(EMaiParty party) {
}

void AMaiControllerExt::SetIgnoreAll() {
}

void AMaiControllerExt::SetForcedEnemy(AActor* enemy) {
}

void AMaiControllerExt::SetFightingEnemy(AActor* enemy) {
}

void AMaiControllerExt::SetChaseLocation(const FVector& Location) {
}

void AMaiControllerExt::SetArchEnemy(AActor* enemy) {
}

void AMaiControllerExt::SetAlertLocation(const FVector& Location) {
}

void AMaiControllerExt::SetAlertInstigator(AActor* Actor) {
}

bool AMaiControllerExt::IsFightingWith(AActor* enemy) const {
    return false;
}

EMaiParty AMaiControllerExt::GetParty() const {
    return EMaiParty::PARTY_0;
}

AActor* AMaiControllerExt::GetForcedEnemy() const {
    return NULL;
}

AActor* AMaiControllerExt::GetFightingEnemy() const {
    return NULL;
}

FVector AMaiControllerExt::GetChaseLocation() const {
    return FVector{};
}

AActor* AMaiControllerExt::GetArchEnemy() const {
    return NULL;
}

FVector AMaiControllerExt::GetAlertLocation() const {
    return FVector{};
}

AActor* AMaiControllerExt::GetAlertInstigator() const {
    return NULL;
}

void AMaiControllerExt::ForceChase(AActor* enemy, bool clearWhenPerceived) {
}

AActor* AMaiControllerExt::FindEnemyToFight_Implementation() {
    return NULL;
}

void AMaiControllerExt::ClearIgnoreAll() {
}

void AMaiControllerExt::ClearForceChase() {
}



#include "MaiHealth.h"

UMaiHealth::UMaiHealth(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_HealthMul[0] = 0.00f;
    this->_HealthMul[1] = 0.00f;
    this->_HealthMul[2] = 0.00f;
    this->_HealthMul[3] = 0.00f;
    this->_HealthMul[4] = 0.00f;
    this->_HealthMul[5] = 0.00f;
    this->_HealthMul[6] = 0.00f;
    this->_HealthMul[7] = 0.00f;
    this->_HealthMul[8] = 0.00f;
    this->_HealthMul[9] = 0.00f;
    this->_MaxHealth = 100;
    this->_Health = 100.00f;
    this->_Immortal = false;
}

void UMaiHealth::SetImmortal(bool immortal) {
}

void UMaiHealth::SetHealth(int32 NewHealth) {
}

void UMaiHealth::Revive() {
}

void UMaiHealth::ReceiveDamage(float Damage, AActor* Instigator) {
}

void UMaiHealth::ReceiveCure(float cure, AActor* Instigator) {
}

void UMaiHealth::Kill() {
}

bool UMaiHealth::IsImmortal() const {
    return false;
}

bool UMaiHealth::IsDead() const {
    return false;
}

void UMaiHealth::Heal() {
}

int32 UMaiHealth::GetMaxHealth() const {
    return 0;
}

int32 UMaiHealth::GetHealthPercent() const {
    return 0;
}

int32 UMaiHealth::GetHealth() const {
    return 0;
}



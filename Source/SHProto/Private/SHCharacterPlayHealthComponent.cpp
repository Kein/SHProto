#include "SHCharacterPlayHealthComponent.h"

USHCharacterPlayHealthComponent::USHCharacterPlayHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->Settings = NULL;
    this->OwnerCharacter = NULL;
    this->PlayingSprintCameraShake = NULL;
    this->HealthValue = 100.00f;
}

void USHCharacterPlayHealthComponent::UpdateControllerLights() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_ValuesDebug() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_NotEverybodyHurts() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_GodMode() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_FakeHeal(int32 Value) {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_FakeDamage(int32 Value) {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_DrawHitpointsDebug() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_DisableReceiveDamageEffects() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_DeathSequence_Debug() {
}

void USHCharacterPlayHealthComponent::SHDebug_Character_Health_CantTouchThis() {
}

void USHCharacterPlayHealthComponent::SetDeathSequenceBlocked(const bool Blocked, const UObject* Object) {
}

float USHCharacterPlayHealthComponent::ReceiveHeal(float InHealValue, const UObject* Object) {
    return 0.0f;
}

float USHCharacterPlayHealthComponent::ReceiveDamage(float DamageValue, const UObject* Object, bool bRequireCriticalnjuryState) {
    return 0.0f;
}

bool USHCharacterPlayHealthComponent::PlayDeathSequenceRequest(UObject* InSlayer, const FVector& InHitWorldDirection) {
    return false;
}

bool USHCharacterPlayHealthComponent::IsDeathSequenceBlocked() const {
    return false;
}

float USHCharacterPlayHealthComponent::GetHealthValue() const {
    return 0.0f;
}

ESHHealthStateEnum USHCharacterPlayHealthComponent::GetHealthState() const {
    return ESHHealthStateEnum::Default;
}



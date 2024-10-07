#include "MandarinLookAtComponent.h"

UMandarinLookAtComponent::UMandarinLookAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_LookAtData.AddDefaulted(3);
    this->IsOver = false;
    this->HeadUpdateMinDot = -0.50f;
    this->IsLookingAt = false;
    this->LookAtAlphaAddRate = 5.00f;
    this->LookAtAlphaLoseRate = 5.00f;
    this->LookAtAlpha = 0.00f;
    this->LookAtVinterpRate = 10.00f;
    this->UseCurrentPriority = false;
    this->DesiredPriority = 3;
    this->TargetZOffset = 0.00f;
    this->LoseInterestDistance = 300.00f;
    this->AttackYawLimit = 90.00f;
    this->AttackPitchLimit = 90.00f;
    this->UsePitchCorrection = false;
    this->PitchCorrectionMin = 15.00f;
    this->PitchCorrectionMax = 20.00f;
    this->UseAttackLookAtLimits = false;
}

void UMandarinLookAtComponent::SetFreezeLookAt(bool Freeze) {
}

void UMandarinLookAtComponent::SetAttackLookAtLimits(bool AttackLimit) {
}

FVector UMandarinLookAtComponent::GetLookAtTargetLocation() {
    return FVector{};
}



#include "SHSecondaryTargetComponent.h"

USHSecondaryTargetComponent::USHSecondaryTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCompletedOnBegin = false;
    this->MaxAllowedHeightDelta = 50.00f;
    this->MaxAllowedDistanceToHitPoint2D = 125.00f;
    this->bIsDirectionalOneSideOnly = true;
    this->MinRequiredDirectionsDotProduct = 0.75f;
    this->SecondaryTargetType = ESHSecondaryTargetType::Undefined;
}

void USHSecondaryTargetComponent::SetDisabled(const bool InDisabled, const UObject* Object) {
}

void USHSecondaryTargetComponent::MarkAsCompleted() {
}

bool USHSecondaryTargetComponent::IsDisabled() const {
    return false;
}

bool USHSecondaryTargetComponent::IsCompleted() const {
    return false;
}

void USHSecondaryTargetComponent::AssignRuntimeSecondaryAttackRowName(const FName& InRowName) {
}



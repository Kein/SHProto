#include "SHInteractionIconComponent.h"

USHInteractionIconComponent::USHInteractionIconComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ESHInteractionIconType::Default;
    this->OpacityState = ESHInteractionIconOpacityState::Hidden;
    this->OpacityIgnoreSelf = false;
    this->OpacityIgnoreFriend = false;
    this->HasDisabledSlotsManagement = false;
    this->TrackSlotLocation = false;
    this->SmallestSlotDistanceImprovement = 3.00f;
    this->SlotManagementIgnoreOwnerActor = true;
    this->SlotManagementIgnoreObservedActor = true;
    this->State = ESHInteractionIconState::Hidden;
    this->IconManager = NULL;
    this->IconWidget = NULL;
    this->CurrentSlot = NULL;
    this->ObservedActor = NULL;
    this->FriendActor = NULL;
    this->ScaleDistanceCurve = NULL;
    this->ScaleResolutionCurve = NULL;
    this->ScaleFovCurve = NULL;
    this->OriginalParent = NULL;
}

void USHInteractionIconComponent::SetState(const ESHInteractionIconState NewState) {
}

void USHInteractionIconComponent::SetFriendActor(const AActor* Actor) {
}

bool USHInteractionIconComponent::HasObservedActor() const {
    return false;
}

bool USHInteractionIconComponent::HasFriendActor() const {
    return false;
}

float USHInteractionIconComponent::GetTargetOpacity() const {
    return 0.0f;
}

AActor* USHInteractionIconComponent::GetObservedActor() const {
    return NULL;
}

AActor* USHInteractionIconComponent::GetFriendActor() const {
    return NULL;
}

float USHInteractionIconComponent::CalculateDesiredScale() const {
    return 0.0f;
}



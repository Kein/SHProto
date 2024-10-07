#include "MaiActionSequenceComponent.h"

UMaiActionSequenceComponent::UMaiActionSequenceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_AutoAddRange = 100.00f;
    this->_Looped = false;
    this->_PreviewIndex = 0;
    this->_MovingPoint = NULL;
}

AMaiActionPoint* UMaiActionSequenceComponent::GetTargetActionPoint() const {
    return NULL;
}

void UMaiActionSequenceComponent::GetSequenceActionPoints(TArray<AMaiActionPoint*>& Points) const {
}

AMaiActionPoint* UMaiActionSequenceComponent::GetNextActionPoint(AMaiActionPoint* Point, APawn* conditionCaller) const {
    return NULL;
}



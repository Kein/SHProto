#include "MaiCuriosityComponent.h"
#include "Templates/SubclassOf.h"

UMaiCuriosityComponent::UMaiCuriosityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_PointOfInterest = NULL;
    this->_UseDetection = false;
    this->_UseSenses = false;
    this->_AutoSelect = false;
    this->_SelectionMethod = EMaiSelectionMethod::NEAREST;
    this->_SearchCooldown = 30.00f;
    this->_LastChance = -1;
}

void UMaiCuriosityComponent::UpdatePointsInPerception(TSubclassOf<AMaiPointOfInterest> pointClass, float areaExtent) {
}

void UMaiCuriosityComponent::UpdateDetectedPoints(float areaExtent) {
}

bool UMaiCuriosityComponent::ShouldIgnorePoint(AMaiPointOfInterest* Point) const {
    return false;
}

AMaiPointOfInterest* UMaiCuriosityComponent::SelectPointOfInterest(EMaiSelectionMethod selection, TSubclassOf<AMaiPointOfInterest> pointClass) {
    return NULL;
}

void UMaiCuriosityComponent::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void UMaiCuriosityComponent::IgnorePoint(AMaiPointOfInterest* Point) {
}

void UMaiCuriosityComponent::DebugCuriosity() {
}



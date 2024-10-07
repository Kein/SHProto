#include "MaiPointOfInterest.h"
#include "MaiDetectionAreaComponent.h"

AMaiPointOfInterest::AMaiPointOfInterest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_DetectionArea = CreateDefaultSubobject<UMaiDetectionAreaComponent>(TEXT("DetectionArea"));
    this->_Cooldown = -1.00f;
    this->_DetectionArea->SetupAttachment(RootComponent);
}

void AMaiPointOfInterest::SwitchOnFor(float Duration) {
}

void AMaiPointOfInterest::SwitchOn() {
}

void AMaiPointOfInterest::SwitchOff() {
}

void AMaiPointOfInterest::OnEnable_Implementation() {
}

void AMaiPointOfInterest::OnDisable_Implementation() {
}



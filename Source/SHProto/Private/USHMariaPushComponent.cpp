#include "USHMariaPushComponent.h"

UUSHMariaPushComponent::UUSHMariaPushComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DistanceToMove = 250.00f;
}

FVector UUSHMariaPushComponent::CalculatePushedLoc(FVector PushingLoc, FVector PushingNormal) {
    return FVector{};
}



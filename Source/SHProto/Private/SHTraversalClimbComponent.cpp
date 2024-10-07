#include "SHTraversalClimbComponent.h"

USHTraversalClimbComponent::USHTraversalClimbComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistanceToEdge = 150.00f;
    this->MaxAngleToEdge = 75.00f;
    this->AnimInstanceClass = NULL;
    this->DistanceScoreMultiplier = 1.00f;
    this->ViewScoreMultiplier = 2.00f;
    this->StandingOnSplineScoreMuliplier = 0.50f;
    this->EdgeHeightCheckOffset = 5.00f;
    this->MaxDirectionDistOffset = 10.00f;
    this->TraversalDirectionRadiusCheck = 20.00f;
    this->HorizontalHeightCheckOffset = 5.00f;
    this->LinkedTraversalAnimGraphInstance = NULL;
}

void USHTraversalClimbComponent::UnregisterSplines(const TArray<USplineComponent*>& InEdgeSplines) {
}

void USHTraversalClimbComponent::RegisterSplines(const TArray<USplineComponent*>& InEdgeSplines) {
}

void USHTraversalClimbComponent::ProcessSlideSnapEnd(bool WasCompleted) {
}

void USHTraversalClimbComponent::ProcessMovementSnapEnd(bool WasCompleted) {
}

void USHTraversalClimbComponent::ProcessEndTraversal() {
}

void USHTraversalClimbComponent::Initialize(USphereComponent* InProximitySphere, const TArray<USplineComponent*>& InEdgeSplines) {
}



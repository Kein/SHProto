#include "SHCharacterPlayTraversalComponent.h"

USHCharacterPlayTraversalComponent::USHCharacterPlayTraversalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentlyPlayingTraversal = NULL;
}

void USHCharacterPlayTraversalComponent::SHDebug_Character_Traversal_ObstacleDrawDebug() {
}

void USHCharacterPlayTraversalComponent::SHDebug_Character_Traversal_ClimbPrintDebug() {
}

void USHCharacterPlayTraversalComponent::SHDebug_Character_Traversal_ClimbDrawDebug() {
}

void USHCharacterPlayTraversalComponent::ProcessTraversalStartedEvent(USHTraversalBaseComponent* InTraversalComp) {
}

void USHCharacterPlayTraversalComponent::ProcessTraversalEndedEvent(USHTraversalBaseComponent* InTraversalComp) {
}



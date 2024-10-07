#include "SHTraversalIconBaseManager.h"

USHTraversalIconBaseManager::USHTraversalIconBaseManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IconUnavailableOpacityMultiplier = 0.20f;
    this->AssignedTraversalComponent = NULL;
    this->AssignedIconComponent = NULL;
}

void USHTraversalIconBaseManager::SetForcedIconState(ESHInteractionIconState InForcedState) {
}

void USHTraversalIconBaseManager::ResetForcedIconState() {
}

void USHTraversalIconBaseManager::RegisterRequisites(USHTraversalBaseComponent* InTraversalComponent, USHInteractionIconComponent* InIconComponent) {
}

void USHTraversalIconBaseManager::ProcessObstacleTraversalUnavailableChangedEvent(USHTraversalBaseComponent* InTraversalComponent) {
}

void USHTraversalIconBaseManager::ProcessObstacleProximityLostCharacterEvent(USHTraversalBaseComponent* InTraversalComponent) {
}

void USHTraversalIconBaseManager::ProcessObstacleProximityFoundCharacterEvent(USHTraversalBaseComponent* InTraversalComponent) {
}



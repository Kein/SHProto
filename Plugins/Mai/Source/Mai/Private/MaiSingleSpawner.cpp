#include "MaiSingleSpawner.h"
#include "Templates/SubclassOf.h"

AMaiSingleSpawner::AMaiSingleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_ActorSpawned = NULL;
    this->_ActorToSpawn = NULL;
    this->_EnableVariants = false;
    this->_AIControllerClass = NULL;
    this->_OverrideAIControllerClass = false;
    this->_OverrideBehaviorTree = false;
}

AActor* AMaiSingleSpawner::SpawnUnique() {
    return NULL;
}

void AMaiSingleSpawner::SetAIControllerClass(TSubclassOf<AAIController> aiClass) {
}

void AMaiSingleSpawner::SetActorClass(TSubclassOf<AActor> ActorClass) {
}

void AMaiSingleSpawner::ReleaseSpawnedActor() {
}


AActor* AMaiSingleSpawner::GetSpawnedActor() const {
    return NULL;
}



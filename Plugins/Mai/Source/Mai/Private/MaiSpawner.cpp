#include "MaiSpawner.h"

AMaiSpawner::AMaiSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_Text = NULL;
    this->_SpawnOnPersistant = true;
    this->_AutoSpawn = false;
    this->_Enabled = true;
    this->_Spawned = 0;
}

void AMaiSpawner::UpdateAutoSpawn() {
}

AActor* AMaiSpawner::SpawnSingle() {
    return NULL;
}

void AMaiSpawner::Spawn() {
}

bool AMaiSpawner::ShouldAutoSpawn() const {
    return false;
}

void AMaiSpawner::SetActive(bool Active) {
}

void AMaiSpawner::PIESpawn() {
}

void AMaiSpawner::PIEDespawn() {
}

void AMaiSpawner::OnSpawnController_Implementation(AAIController* Controller) {
}



bool AMaiSpawner::IsInSpawnArea(FVector Location, float Extent) const {
    return false;
}

bool AMaiSpawner::isInChaseArea(FVector Location, float Extent) const {
    return false;
}

bool AMaiSpawner::IsActive() const {
    return false;
}

void AMaiSpawner::Despawn() {
}

void AMaiSpawner::ChangeAutoSpawn(bool Active) {
}




#include "MaiMultiSpawner.h"

AMaiMultiSpawner::AMaiMultiSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_SpawnLimit = 10;
}

void AMaiMultiSpawner::StopWaveSpawn() {
}

void AMaiMultiSpawner::StartWaveSpawn(int32 Count, float minDelay, float maxDelay) {
}

TArray<AActor*> AMaiMultiSpawner::GetSpawnedActors() const {
    return TArray<AActor*>();
}

void AMaiMultiSpawner::ChangeInfoWeight(int32 Index, uint8 Weight) {
}



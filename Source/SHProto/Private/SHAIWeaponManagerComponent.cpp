#include "SHAIWeaponManagerComponent.h"

USHAIWeaponManagerComponent::USHAIWeaponManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->bAutoSpawn = false;
    this->WeaponClassToSpawn = NULL;
    this->SpawnedWeapon = NULL;
}

void USHAIWeaponManagerComponent::ProcessSpawnerAfterSpawn(AActor* Actor) {
}



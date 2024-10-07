#include "MaiSpawnerManager.h"

UMaiSpawnerManager::UMaiSpawnerManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // ENGINE_CHANGE
    this->bSaveGame = true;
    this->_SaveVersion = 0;
    this->_NextUid = 1;
    this->_DrawStamp = 0;
}

void UMaiSpawnerManager::StopWaveSpawn(FName spawnerTag) {
}

void UMaiSpawnerManager::StartWaveSpawn(FName spawnerTag, int32 Count, float minDelay, float maxDelay) {
}

AActor* UMaiSpawnerManager::SpawnNearestByTag(FName spawnerTag, FVector Location) {
    return NULL;
}

void UMaiSpawnerManager::SpawnByTag(FName spawnerTag) {
}

void UMaiSpawnerManager::SpawnAllByTag(FName spawnerTag, TArray<AActor*>& Actors) {
}

AActor* UMaiSpawnerManager::SP_SpawnUnique(FGameplayTag actorTag, FMaiSpawnerID spawnerID) {
    return NULL;
}

void UMaiSpawnerManager::SP_Spawn(const FMaiSpawnerID& spawnerID) {
}

void UMaiSpawnerManager::SP_Reincarnate(const FMaiSpawnerID& spawnerID, uint8 healthPercent) {
}

void UMaiSpawnerManager::SP_ManualSpawnMode(const FMaiSpawnerID& spawnerID) {
}

bool UMaiSpawnerManager::SP_IsInAutoSpawnMode(const FMaiSpawnerID& spawnerID) const {
    return false;
}

bool UMaiSpawnerManager::SP_IsActive(const FMaiSpawnerID& spawnerID) const {
    return false;
}

bool UMaiSpawnerManager::SP_HasSpawnedActor(const FMaiSpawnerID& spawnerID) const {
    return false;
}

AMaiSpawner* UMaiSpawnerManager::SP_GetSpawner(const FMaiSpawnerID& spawnerID) const {
    return NULL;
}

AActor* UMaiSpawnerManager::SP_GetSpawnedActor(const FMaiSpawnerID& spawnerID) const {
    return NULL;
}

void UMaiSpawnerManager::SP_Enable(const FMaiSpawnerID& spawnerID) {
}

void UMaiSpawnerManager::SP_Disable(const FMaiSpawnerID& spawnerID) {
}

void UMaiSpawnerManager::SP_DespawnUnique(FGameplayTag actorTag) {
}

void UMaiSpawnerManager::SP_Despawn(const FMaiSpawnerID& spawnerID, bool clearActorEntry) {
}

void UMaiSpawnerManager::SP_AutoSpawnMode(const FMaiSpawnerID& spawnerID) {
}

void UMaiSpawnerManager::SetWaveSpawn(FName spawnerTag, int32 Count, float minDelay, float maxDelay) {
}

bool UMaiSpawnerManager::IsLevelLoaded(AActor* Actor) const {
    return false;
}

UMaiSpawnerManager* UMaiSpawnerManager::getSpawnerManager(const UObject* WorldContext) {
    return NULL;
}

FMaiSpawnerID UMaiSpawnerManager::getSpawnerIDFromSpawned(UObject* WorldContext, AActor* spawned) {
    return FMaiSpawnerID{};
}

FMaiSpawnerID UMaiSpawnerManager::getSpawnerIDByTag(UObject* WorldContext, FName Tag) {
    return FMaiSpawnerID{};
}

FMaiSpawnerID UMaiSpawnerManager::getSpawnerIDBySoftRef(UObject* WorldContext, TSoftObjectPtr<AMaiSpawner> softRef) {
    return FMaiSpawnerID{};
}

FMaiSpawnerID UMaiSpawnerManager::getSpawnerIDByRef(UObject* WorldContext, AMaiSpawner* spawner) {
    return FMaiSpawnerID{};
}

void UMaiSpawnerManager::GC() {
}

AMaiSpawner* UMaiSpawnerManager::FindSpawner(const AActor* Actor) const {
    return NULL;
}

AActor* UMaiSpawnerManager::FindOrigin(const AActor* Actor) const {
    return NULL;
}

void UMaiSpawnerManager::DestroyController(APawn* Actor, bool disableSpawner) {
}

void UMaiSpawnerManager::DespwnAnyoneWhoWants() {
}

void UMaiSpawnerManager::DespawnByTag(FName spawnerTag) {
}

void UMaiSpawnerManager::DespawnActor(AActor* Actor, bool disableSpawner, bool forceDestroy, bool forgetIt) {
}

void UMaiSpawnerManager::DesiredDespawnActor(AActor* Actor) {
}

void UMaiSpawnerManager::ClearWorldState() {
}

AActor* UMaiSpawnerManager::AISpawnSingle(FName spawnerTag) {
    return NULL;
}

void UMaiSpawnerManager::AIPrintSpawnersWithActors() {
}

void UMaiSpawnerManager::AIPrintSpawnedActors() {
}

void UMaiSpawnerManager::AIPrintAllSpawners() {
}

void UMaiSpawnerManager::AIPrintAllSpawnedActors() {
}



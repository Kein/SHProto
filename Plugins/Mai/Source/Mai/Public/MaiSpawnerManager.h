#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "MaiSpawnedActor.h"
#include "MaiSpawnerData.h"
#include "MaiSpawnerDebugStamp.h"
#include "MaiSpawnerID.h"
#include "MaiWaveSpawn.h"
#include "SpawnUniqueEventDelegate.h"
#include "MaiSpawnerManager.generated.h"

class AActor;
class AMaiSpawner;
class APawn;
class UMaiSlicedTask;
class UMaiSpawnerManager;
class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiSpawnerManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    uint8 _SaveVersion;
    
    UPROPERTY()
    TMap<FGameplayTag, FMaiSpawnerID> _ActiveSpawners;
    
    UPROPERTY()
    TMap<FGameplayTag, FGuid> _UniqueActors;
    
    UPROPERTY()
    TMap<FGuid, FMaiSpawnedActor> _AllSpawnedActors;
    
    UPROPERTY()
    TMap<FGuid, FMaiSpawnerData> _AllSpawners;
    
    UPROPERTY()
    int32 _NextUid;
    
    UPROPERTY(Transient)
    TArray<AMaiSpawner*> _LoadedSpawners;
    
    UPROPERTY(Transient)
    TMap<FName, FMaiWaveSpawn> _WaveSpawn;
    
    UPROPERTY(Transient)
    TMap<AActor*, FTransform> _NewSpawnedActors;
    
    UPROPERTY(Transient)
    TArray<AMaiSpawner*> _PendingSpawners;
    
    UPROPERTY(Transient)
    TArray<UMaiSlicedTask*> _SlicedTasks;
    
    UPROPERTY(VisibleAnywhere)
    int32 _DrawStamp;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FMaiSpawnerDebugStamp> _DebugStamps;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnUniqueEvent OnSpawnUniqueActor;
    
    UMaiSpawnerManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopWaveSpawn(FName spawnerTag);
    
    UFUNCTION(BlueprintCallable)
    void StartWaveSpawn(FName spawnerTag, int32 Count, float minDelay, float maxDelay);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnNearestByTag(FName spawnerTag, FVector Location);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnByTag(FName spawnerTag);
    
    UFUNCTION(BlueprintCallable)
    void SpawnAllByTag(FName spawnerTag, TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable)
    AActor* SP_SpawnUnique(FGameplayTag actorTag, FMaiSpawnerID spawnerID);
    
    UFUNCTION(BlueprintCallable)
    void SP_Spawn(const FMaiSpawnerID& spawnerID);
    
    UFUNCTION(BlueprintCallable)
    void SP_Reincarnate(const FMaiSpawnerID& spawnerID, uint8 healthPercent);
    
    UFUNCTION(BlueprintCallable)
    void SP_ManualSpawnMode(const FMaiSpawnerID& spawnerID);
    
    UFUNCTION(BlueprintPure)
    bool SP_IsInAutoSpawnMode(const FMaiSpawnerID& spawnerID) const;
    
    UFUNCTION(BlueprintPure)
    bool SP_IsActive(const FMaiSpawnerID& spawnerID) const;
    
    UFUNCTION(BlueprintPure)
    bool SP_HasSpawnedActor(const FMaiSpawnerID& spawnerID) const;
    
    UFUNCTION(BlueprintPure)
    AMaiSpawner* SP_GetSpawner(const FMaiSpawnerID& spawnerID) const;
    
    UFUNCTION(BlueprintPure)
    AActor* SP_GetSpawnedActor(const FMaiSpawnerID& spawnerID) const;
    
    UFUNCTION(BlueprintCallable)
    void SP_Enable(const FMaiSpawnerID& spawnerID);
    
    UFUNCTION(BlueprintCallable)
    void SP_Disable(const FMaiSpawnerID& spawnerID);
    
    UFUNCTION(BlueprintCallable)
    void SP_DespawnUnique(FGameplayTag actorTag);
    
    UFUNCTION(BlueprintCallable)
    void SP_Despawn(const FMaiSpawnerID& spawnerID, bool clearActorEntry);
    
    UFUNCTION(BlueprintCallable)
    void SP_AutoSpawnMode(const FMaiSpawnerID& spawnerID);
    
    UFUNCTION(BlueprintCallable)
    void SetWaveSpawn(FName spawnerTag, int32 Count, float minDelay, float maxDelay);
    
    UFUNCTION(BlueprintPure)
    bool IsLevelLoaded(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMaiSpawnerManager* getSpawnerManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static FMaiSpawnerID getSpawnerIDFromSpawned(UObject* WorldContext, AActor* spawned);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static FMaiSpawnerID getSpawnerIDByTag(UObject* WorldContext, FName Tag);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static FMaiSpawnerID getSpawnerIDBySoftRef(UObject* WorldContext, TSoftObjectPtr<AMaiSpawner> softRef);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContext"))
    static FMaiSpawnerID getSpawnerIDByRef(UObject* WorldContext, AMaiSpawner* spawner);
    
    UFUNCTION()
    void GC();
    
    UFUNCTION(BlueprintPure)
    AMaiSpawner* FindSpawner(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    AActor* FindOrigin(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void DestroyController(APawn* Actor, bool disableSpawner);
    
    UFUNCTION(BlueprintCallable)
    void DespwnAnyoneWhoWants();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DespawnByTag(FName spawnerTag);
    
    UFUNCTION(BlueprintCallable)
    void DespawnActor(AActor* Actor, bool disableSpawner, bool forceDestroy, bool forgetIt);
    
    UFUNCTION(BlueprintCallable)
    void DesiredDespawnActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearWorldState();
    
    UFUNCTION(BlueprintCallable, Exec)
    AActor* AISpawnSingle(FName spawnerTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIPrintSpawnersWithActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIPrintSpawnedActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIPrintAllSpawners();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIPrintAllSpawnedActors();
    
};


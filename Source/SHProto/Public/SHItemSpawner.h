#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHItemAndQuantityHandle.h"
#include "SHItemSpawner.generated.h"

class ASHItem;
class ASHItemSpawner;
class UBoxComponent;
class UMeshComponent;

UCLASS()
class ASHItemSpawner : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHItemSpawnerEvent, ASHItemSpawner*, ItemSpawnerPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UMeshComponent* DebugMeshPreview;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* DebugInteractionDetectableShapePreview;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAutoRespawnOnStreaming;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHItemAndQuantityHandle ItemToSpawnData;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSHItemSpawnerEvent RuntimeItemSpawnedEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHItemSpawnerEvent RuntimeItemCollectedEvent;
    
protected:
    UPROPERTY(SaveGame)
    bool bShouldRespawnItem;
    
    UPROPERTY(Transient)
    ASHItem* SpawnedItemPtr;
    
public:
    ASHItemSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ASHItem* SpawnRuntimeItem();
    
protected:
    UFUNCTION()
    void ProcessSpawnedItemCollected(ASHItem* ItemRef);
    
public:
    UFUNCTION(BlueprintPure)
    ASHItem* GetSpawnedItem() const;
    
};


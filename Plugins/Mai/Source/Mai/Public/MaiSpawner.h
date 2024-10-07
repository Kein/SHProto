#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DaiConditions.h"
#include "DaiNotifies.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "SpawnEventDelegate.h"
#include "MaiSpawner.generated.h"

class AAIController;
class UMaiChaseAreaComponent;
class UMaiSpawnAreaComponent;
class UTextRenderComponent;

UCLASS(Abstract)
class MAI_API AMaiSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    UTextRenderComponent* _Text;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString _LastGroundName;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool _SpawnOnPersistant;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    FName _UniqueTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UMaiSpawnAreaComponent*> _SpawnAreas;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Instanced, VisibleAnywhere)
    TArray<UMaiChaseAreaComponent*> _ChaseAreas;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool _AutoSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    bool _Enabled;
    
    UPROPERTY(SaveGame)
    int8 _Spawned;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _AddGameplayTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _RemoveGameplayTags;
    
    UPROPERTY(EditAnywhere)
    FDaiConditions _CanSpawnConditions;
    
    UPROPERTY(EditAnywhere)
    FDaiNotifies _OnSpawnNotifies;
    
    UPROPERTY(EditAnywhere)
    FDaiNotifies _OnDespawnNotifies;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSpawnEvent AfterSpawn;
    
    UPROPERTY(BlueprintAssignable)
    FSpawnEvent BeforeDespawn;
    
    AMaiSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAutoSpawn();
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnSingle();
    
    UFUNCTION(BlueprintCallable)
    void Spawn();
    
    UFUNCTION(BlueprintPure)
    bool ShouldAutoSpawn() const;
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool Active);
    
    UFUNCTION()
    void PIESpawn();
    
    UFUNCTION()
    void PIEDespawn();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnSpawnController(AAIController* Controller);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawn(AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDespawn(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    bool IsInSpawnArea(FVector Location, float Extent) const;
    
    UFUNCTION(BlueprintPure)
    bool isInChaseArea(FVector Location, float Extent) const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Despawn();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAutoSpawn(bool Active);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BlockSpawn();
    
};


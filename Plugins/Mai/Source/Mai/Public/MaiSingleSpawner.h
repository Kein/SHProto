#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaiBlackboardValue.h"
#include "MaiSpawnInfo.h"
#include "MaiSpawner.h"
#include "Templates/SubclassOf.h"
#include "MaiSingleSpawner.generated.h"

class AAIController;
class AActor;
class AMaiActionGraph;
class UBehaviorTree;

UCLASS()
class MAI_API AMaiSingleSpawner : public AMaiSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    AActor* _ActorSpawned;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AActor> _ActorToSpawn;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaiSpawnInfo> _SpawnVariants;
    
    UPROPERTY(EditAnywhere)
    bool _EnableVariants;
    
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AAIController> _AIControllerClass;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideAIControllerClass;
    
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UBehaviorTree> _BehaviorTree;
    
    UPROPERTY(EditAnywhere)
    bool _OverrideBehaviorTree;
    
    UPROPERTY(EditAnywhere)
    TArray<FMaiBlackboardValue> _BlackboardConfig;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AMaiActionGraph> _ActionGraph;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag _ActorTag;
    
public:
    AMaiSingleSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AActor* SpawnUnique();
    
    UFUNCTION(BlueprintCallable)
    void SetAIControllerClass(TSubclassOf<AAIController> aiClass);
    
    UFUNCTION(BlueprintCallable)
    void SetActorClass(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSpawnedActor();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitBehaviors(AAIController* Controller);
    
    UFUNCTION(BlueprintPure)
    AActor* GetSpawnedActor() const;
    
};


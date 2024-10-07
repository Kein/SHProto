#pragma once
#include "CoreMinimal.h"
#include "MaiSpawnInfo.h"
#include "MaiSpawner.h"
#include "MaiWaveSpawn.h"
#include "MaiMultiSpawner.generated.h"

class AActor;

UCLASS()
class MAI_API AMaiMultiSpawner : public AMaiSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TArray<AActor*> _SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FMaiSpawnInfo> _SpawnInfo;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    int32 _SpawnLimit;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FMaiWaveSpawn _WaveSpawn;
    
    AMaiMultiSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopWaveSpawn();
    
    UFUNCTION(BlueprintCallable)
    void StartWaveSpawn(int32 Count, float minDelay, float maxDelay);
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetSpawnedActors() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeInfoWeight(int32 Index, uint8 Weight);
    
};


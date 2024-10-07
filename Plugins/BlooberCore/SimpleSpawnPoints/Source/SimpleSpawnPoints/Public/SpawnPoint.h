#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "DataLayerStatus.h"
#include "LevelStreamingRequestHandle.h"
#include "SpawnPoint.generated.h"

UCLASS()
class SIMPLESPAWNPOINTS_API ASpawnPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CustomName;
    
    UPROPERTY(EditAnywhere)
    TArray<FLevelStreamingRequestHandle> StreamingRequests;
    
    UPROPERTY(EditAnywhere)
    TArray<FDataLayerStatus> InitialDataLayerRequests;
    
public:
    ASpawnPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayFromHere();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerSpawn();
    
};


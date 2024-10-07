#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "Subsystems/WorldSubsystem.h"
#include "LevelStreamingDataLayerSubsystem.generated.h"

class UDataLayerInstance;

UCLASS()
class LEVELSTREAMING_API ULevelStreamingDataLayerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULevelStreamingDataLayerSubsystem();

protected:
    UFUNCTION()
    void OnDataLayerRuntimeStateChanged(UDataLayerInstance* DataLayer, EDataLayerRuntimeState State);
    
};


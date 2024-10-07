#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SHSpawnPointSettings.generated.h"

class USHSpawnpointsItemsDatabase;
class USHSpawnpointsTutorialsDatabase;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class USHSpawnPointSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USHSpawnpointsItemsDatabase> SpawnpointsItemsDatabase;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USHSpawnpointsTutorialsDatabase> SpawnpointsTutorialsDatabase;
    
public:
    USHSpawnPointSettings();

};


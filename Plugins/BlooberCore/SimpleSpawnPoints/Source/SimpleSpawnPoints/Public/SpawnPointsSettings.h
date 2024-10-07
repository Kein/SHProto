#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SpawnPointsSettings.generated.h"

class USpawnPointsConfig;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class SIMPLESPAWNPOINTS_API USpawnPointsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USpawnPointsConfig> SpawnPointConfig;
    
public:
    USpawnPointsSettings();

};


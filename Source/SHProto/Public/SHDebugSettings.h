#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InputCoreTypes.h"
#include "SHDebugSettings.generated.h"

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class USHDebugSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FKey> GhostKeys;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FKey> DebugCheckPointKeys;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float SpeedUpTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    float SlowDownTimeDilation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FKey> SpeedUpKeys;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TArray<FKey> SlowDownKeys;
    
public:
    USHDebugSettings();

};


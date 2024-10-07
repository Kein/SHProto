#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "LogSettings.generated.h"

class ULogConfig;

UCLASS(DefaultConfig, Config=Game)
class LOG_API ULogSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<ULogConfig> LogConfig;
    
public:
    ULogSettings();

};


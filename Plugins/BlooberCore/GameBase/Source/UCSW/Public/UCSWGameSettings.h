#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UCSWGameSettings.generated.h"

class USettingOptionsConfig;

UCLASS(BlueprintType, DefaultConfig, Config=Game)
class UCSW_API UUCSWGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    TSoftObjectPtr<USettingOptionsConfig> SettingOptionsConfig;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    FText MonitorOptionText;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    bool bChangeLanguageAtOnce;
    
    UUCSWGameSettings();

};


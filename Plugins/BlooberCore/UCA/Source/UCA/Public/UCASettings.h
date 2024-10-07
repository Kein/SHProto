#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UCASettings.generated.h"

class UAchievementsConfig;
class UActivitiesConfig;
class UUCADebugWidget;

UCLASS(DefaultConfig, Config=Game)
class UCA_API UUCASettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAchievementsConfig> AchievementsConfig;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<UUCADebugWidget> DebugWidgetClass;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UActivitiesConfig> ActivitiesConfig;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPresenceSupported;
    
    UPROPERTY(Config, EditAnywhere)
    bool bPresenceUseZones;
    
public:
    UUCASettings();

};


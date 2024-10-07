#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SaveGameSettings.generated.h"

class USaveWidget;

UCLASS(DefaultConfig, Config=Game)
class GAMEBASE_API USaveGameSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    int32 MaxSaveSlotsNumber;
    
    UPROPERTY(Config, EditAnywhere)
    int32 AutoSaveSlotsNumber;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftClassPtr<USaveWidget> SaveWidgetClass;
    
    UPROPERTY(Config, EditAnywhere)
    bool SaveIconOnlyInFullSave;
    
    UPROPERTY(Config, EditAnywhere)
    float SaveIconShowTime;
    
public:
    USaveGameSettings();

};


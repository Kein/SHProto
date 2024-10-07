#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "InputRebindingSettings.generated.h"

class UMappingDisplayInfo;
class UUE4KeyNames;

UCLASS(DefaultConfig, Config=Game)
class INPUTREBINDING_API UInputRebindingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UUE4KeyNames> KeyNames;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UMappingDisplayInfo> ActionNames;
    
    UPROPERTY(Config, EditAnywhere)
    bool AllowModifierKeyBinding;
    
public:
    UInputRebindingSettings();

};


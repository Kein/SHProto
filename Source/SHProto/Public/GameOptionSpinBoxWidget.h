#pragma once
#include "CoreMinimal.h"
#include "SettingOptionSpinBoxWidget.h"
#include "EGameOptions.h"
#include "GameOptionSpinBoxWidget.generated.h"

class UGameOptionsConfig;
class UGameplayPresetsConfig;
class URetroModeDataListAsset;

UCLASS(EditInlineNew)
class UGameOptionSpinBoxWidget : public USettingOptionSpinBoxWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    EGameOptions Option;
    
    UPROPERTY(EditDefaultsOnly)
    UGameOptionsConfig* Config;
    
    UPROPERTY(EditDefaultsOnly)
    UGameplayPresetsConfig* Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<URetroModeDataListAsset> RetroModes;
    
    UPROPERTY(EditInstanceOnly)
    bool bIsDevelopmentAllowAll;
    
public:
    UGameOptionSpinBoxWidget();

};


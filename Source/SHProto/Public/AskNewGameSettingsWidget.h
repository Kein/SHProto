#pragma once
#include "CoreMinimal.h"
#include "SettingOptionVisualizationData.h"
#include "AskDialogWidget.h"
#include "AskNewGameSettingsWidget.generated.h"

class UGameOptionsConfig;
class UGameplayPresetsConfig;
class UImage;

UCLASS(EditInlineNew)
class UAskNewGameSettingsWidget : public UAskDialogWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UGameOptionsConfig* Config;
    
    UPROPERTY(EditDefaultsOnly)
    UGameplayPresetsConfig* Presets;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Visualization_img;
    
public:
    UAskNewGameSettingsWidget();

    UFUNCTION(BlueprintCallable)
    void Update();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnShowVisualization(const FSettingOptionVisualizationData& Visualization);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHideVisualization();
    
};


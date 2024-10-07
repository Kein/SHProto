#pragma once
#include "CoreMinimal.h"
#include "BaseSettingsPanelWidget.h"
#include "ColorVisionDeficiencyData.h"
#include "ControlTipsData.h"
#include "HDRData.h"
#include "SubtitleData.h"
#include "SettingsPanelWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API USettingsPanelWidget : public UBaseSettingsPanelWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowExtPanelDynamicDelegate, FName, PanelId);
    
    UPROPERTY(BlueprintAssignable)
    FShowExtPanelDynamicDelegate BP_OnShowExtPanel;
    
    USettingsPanelWidget();

    UFUNCTION(BlueprintCallable)
    void ShowExtPanel(FName PanelId);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTextVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateHDRVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateGammaVisualization(float Gamma) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateControlTipsVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateColorVisionDeficiencyVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowTextVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowHDRVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowGammaVisualization(bool Show) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowControlTipsVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowColorVisionDeficiencyVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQualitySwitched(bool IsOn) const;
    
public:
    UFUNCTION(BlueprintPure)
    FSubtitleData GetSubtitleData() const;
    
protected:
    UFUNCTION(BlueprintPure)
    float GetNeutralGamma() const;
    
public:
    UFUNCTION(BlueprintPure)
    FHDRData GetHDRData() const;
    
    UFUNCTION(BlueprintPure)
    FControlTipsData GetControlTipsData() const;
    
    UFUNCTION(BlueprintPure)
    FColorVisionDeficiencyData GetColorVisionDeficiencyData() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHDRSwitched(bool IsOn) const;
    
};


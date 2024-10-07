#pragma once
#include "CoreMinimal.h"
#include "GenericSettingsPanelWidget.h"
#include "SettingOptionVisualizationData.h"
#include "BaseSettingsPanelWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API UBaseSettingsPanelWidget : public UGenericSettingsPanelWidget {
    GENERATED_BODY()
public:
    UBaseSettingsPanelWidget();

    UFUNCTION(BlueprintCallable)
    void RequestPreApplyTest();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnShowVisualization(const FSettingOptionVisualizationData& Visualization);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnNeedPreApplyTest(bool On);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnHideVisualization();
    
};


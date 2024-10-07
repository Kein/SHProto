#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "SettingsPanelWidget.h"
#include "InteractionIconData.h"
#include "ReticleData.h"
#include "StruggleInputData.h"
#include "TraversalIconData.h"
#include "TutorialsData.h"
#include "SHSettingOptionsPanel.generated.h"

class UGameplayPresetsConfig;
class UItemsNotificationsVisualizationWidget;
class URetroModeDataListAsset;
class USHGameTextsConfig;
class UWidget;

UCLASS(EditInlineNew)
class USHSettingOptionsPanel : public USettingsPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* ShowAdvanced_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* GameplayChallenge_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UItemsNotificationsVisualizationWidget* ItemsNotificationsVis_wdg;
    
    UPROPERTY(EditDefaultsOnly)
    UGameplayPresetsConfig* PresetsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<URetroModeDataListAsset> RetroModes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHGameTextsConfig* GameTextsConfig;
    
public:
    USHSettingOptionsPanel();

protected:
    UFUNCTION()
    void UpdateItemsNotificationsVisualization() const;
    
    UFUNCTION()
    void ShowItemsNotificationsVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTutorialsVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTraversalIconVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateTranscriptionVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateStruggleIconVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateReticleVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateItemsNotificationsVisualization() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUpdateInteractionIconVisualization();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowTutorialsVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowTraversalIconVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowTranscriptionVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowStruggleIconVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowReticleVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowItemsNotificationsVisualization(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowInteractionIconVisualization(bool Show);
    
    UFUNCTION(BlueprintPure)
    FTutorialsData GetTutorialsData() const;
    
    UFUNCTION(BlueprintPure)
    FTraversalIconData GetTraversalIconData() const;
    
    UFUNCTION(BlueprintPure)
    FSlateFontInfo GetTranscriptionFontInfo() const;
    
    UFUNCTION(BlueprintPure)
    FStruggleInputData GetStruggleIconData() const;
    
    UFUNCTION(BlueprintPure)
    FReticleData GetReticleData() const;
    
    UFUNCTION(BlueprintPure)
    bool GetItemsNotificationsData() const;
    
    UFUNCTION(BlueprintPure)
    FInteractionIconData GetInteractionIconData() const;
    
    UFUNCTION(BlueprintCallable)
    void GameplayChallengeApply();
    
};


#pragma once
#include "CoreMinimal.h"
#include "ExtraSettingsPanelWidget.h"
#include "ESHExtraSettingsType.h"
#include "SHExtraSettingsPanelWidget.generated.h"

class UAskDialogWidget;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class USHExtraSettingsPanelWidget : public UExtraSettingsPanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    ESHExtraSettingsType PanelType;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UAskDialogWidget* Confirmation_dialog;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPanelNeedBackInfoDialog;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPanelNeedFadeOutBeforeBackProcedure;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPanelNeedResetOnBackProcedure;
    
    UPROPERTY(EditDefaultsOnly)
    bool bPanelNeedRevertOnBackProcedure;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
public:
    USHExtraSettingsPanelWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowBackInfo();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBackInfo(FName Mode);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHideBackInfo();
    
    UFUNCTION(BlueprintCallable)
    void HideBackInfo();
    
    UFUNCTION()
    void FadedOut();
    
};


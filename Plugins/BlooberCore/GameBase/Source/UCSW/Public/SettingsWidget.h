#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "BaseSettingsWidget.h"
#include "SettingsWidget.generated.h"

class UBButton;
class UExtraSettingsPanelWidget;
class USettingsDialogPanel;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class UCSW_API USettingsWidget : public UBaseSettingsWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowBackgoundDelegate, bool, Show);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> BackKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ResetKeys;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<FKey> PrevPanelKeys;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<FKey> NextPanelKeys;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Back_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Reset_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* Primary_switcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Main_panel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsDialogPanel* DialogPanel;
    
    UPROPERTY(BlueprintAssignable)
    FShowBackgoundDelegate BP_OnShowBackground;
    
public:
    USettingsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowExtraPanel(UWidget* Panel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowExtraPanel(UExtraSettingsPanelWidget* Panel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBackground(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExtPanel(FName PanelId);
    
    UFUNCTION()
    void OnActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex);
    
    UFUNCTION(BlueprintCallable)
    void BackToMainPanel();
    
};


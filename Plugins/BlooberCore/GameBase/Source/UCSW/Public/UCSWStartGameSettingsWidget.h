#pragma once
#include "CoreMinimal.h"
#include "StartGameSettingsWidget.h"
#include "InputCoreTypes.h"
#include "UCSWStartGameSettingsWidget.generated.h"

class UAkAudioEvent;
class UExtraSettingsPanelWidget;
class USettingsDialogPanel;
class UUCSWStartGameSettingsPanel;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class UCSW_API UUCSWStartGameSettingsWidget : public UStartGameSettingsWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowBackgoundDelegate, bool, Show);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ContinueKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> BackKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ResetKeys;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyButtonUsed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ContinueSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* BackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ResetSound;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* Main_switcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USettingsDialogPanel* DialogPanel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
    UPROPERTY(BlueprintAssignable)
    FShowBackgoundDelegate BP_OnShowBackground;
    
public:
    UUCSWStartGameSettingsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowExtraPanel(UUCSWStartGameSettingsPanel* Panel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowExtraPanel(UExtraSettingsPanelWidget* Panel);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCountdown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowConfirmation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowBackground(bool Show);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnRevert();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION()
    void OnFadedOutAnim();
    
    UFUNCTION()
    void OnFadedInAnim();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExtPanel(FName PanelId);
    
    UFUNCTION()
    void OnActiveWidgetChanged(UWidget* active_widget, int32 active_widget_index);
    
};


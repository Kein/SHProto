#pragma once
#include "CoreMinimal.h"
#include "BUserWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "ExtraSettingsPanelWidget.generated.h"

class UAkAudioEvent;
class UBButton;
class UGenericSettingsPanelWidget;

UCLASS(Abstract, EditInlineNew)
class UCSW_API UExtraSettingsPanelWidget : public UBUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FName PanelName;
    
    UPROPERTY(EditAnywhere)
    bool PanelNeedNoBackgroundView;
    
    UPROPERTY(EditAnywhere)
    bool bPanelHasCustomBackHotKey;
    
    UPROPERTY(EditAnywhere)
    bool bPanelHasCustomBackProcedure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* BackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ResetSound;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UGenericSettingsPanelWidget* Options_panel;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Back_but;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Reset_but;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnBack;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnRevert;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnReset;
    
    UExtraSettingsPanelWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnRevert();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool BP_OnCustomBack();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnBack();
    
    UFUNCTION(BlueprintCallable)
    void Back();
    
};


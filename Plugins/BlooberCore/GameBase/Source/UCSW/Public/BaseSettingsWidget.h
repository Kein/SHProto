#pragma once
#include "CoreMinimal.h"
#include "BUserWidget.h"
#include "BaseSettingsWidget.generated.h"

class UAkAudioEvent;
class UUCWTabBar;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Abstract, EditInlineNew)
class UCSW_API UBaseSettingsWidget : public UBUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackEvent);
    
protected:
    UPROPERTY(EditAnywhere)
    FText AdvQualityCustomText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UUCWTabBar* Main_tbar;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidgetSwitcher* Main_switcher;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
    UPROPERTY(EditAnywhere)
    uint8 bApplyButtonUsed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTreatChangeTabAsBack: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSilentPositiveConfirmation: 1;
    
    UPROPERTY(EditAnywhere)
    float FadeOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* BackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ResetSound;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnBackEvent OnBack;
    
    UBaseSettingsWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowEvent();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCountdown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowConfirmation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSave() const;
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRevert();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnReset();
    
protected:
    UFUNCTION()
    void OnFadedOutAnim();
    
    UFUNCTION()
    void OnFadedInAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBackEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CountdownResponseConfirm();
    
    UFUNCTION(BlueprintCallable)
    void CountdownResponseCancel();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationResponseYes();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationResponseNo();
    
    UFUNCTION(BlueprintCallable)
    void ConfirmationResponseCancel();
    
public:
    UFUNCTION(BlueprintCallable)
    void Back();
    
};


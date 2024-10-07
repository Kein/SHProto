#pragma once
#include "CoreMinimal.h"
#include "BUserWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "SettingsDialogPanel.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API USettingsDialogPanel : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bManageVisibilityOnShowAndHide;
    
public:
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate BP_OnConfirmationResponseYes;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate BP_OnConfirmationResponseNo;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate BP_OnConfirmationResponseCancel;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate BP_OnCountdownResponseConfirm;
    
    UPROPERTY(BlueprintAssignable)
    FSimpleDynamicDelegate BP_OnCountdownResponseCancel;
    
    USettingsDialogPanel();

    UFUNCTION(BlueprintCallable)
    void ShowCountdown();
    
    UFUNCTION(BlueprintCallable)
    void ShowConfirmation();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowCountdown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShowConfirmation();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
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
    
};


#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "DeviceAwareInterface.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "SkipWidgetTickEventDelegate.h"
#include "UCWSkipWidget.generated.h"

class UProgressBar;
class UUCWProgressWidget;

UCLASS(EditInlineNew)
class UCW_API UUCWSkipWidget : public UUserWidget, public IDeviceAwareInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UProgressBar* ProgressBar_wdg;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UUCWProgressWidget* Progress_wdg;
    
    UPROPERTY(EditAnywhere)
    float SkipHoldTime;
    
    UPROPERTY(EditAnywhere)
    bool bActivateOnShow;
    
    UPROPERTY(EditAnywhere)
    bool bSkipOnAnyKey;
    
    UPROPERTY(EditAnywhere)
    bool bSetVisibilityOnShow;
    
    UPROPERTY(EditAnywhere)
    bool bSetVisibilityOnHide;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> SkipKeys;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnSkipStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSkipWidgetTickEvent K2_OnSkipTick;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnSkipCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnSkip;
    
    UUCWSkipWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivate();
    
public:
    UFUNCTION(BlueprintCallable)
    void InputDeviceChanged();
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable)
    void Deactivate();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSkipTick(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSkipStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSkipCancel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnSkip();
    
public:
    UFUNCTION(BlueprintCallable)
    void Activate();
    

    // Fix for true pure virtual functions not being implemented
};


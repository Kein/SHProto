#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "BUserWidget.h"
#include "SimpleDynamicDelegateDelegate.h"
#include "SHInMenuCreditsWidget.generated.h"

class UAkAudioEvent;
class UCreditsWidget;
class UUCWSkipWidget;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class USHInMenuCreditsWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UWidgetSwitcher* Main_switcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UCreditsWidget* Credits_wdg;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UUCWSkipWidget* Skip_wdg;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicStart;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicEnd;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FSimpleDynamicDelegate K2_OnBack;
    
public:
    USHInMenuCreditsWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Continue();
    
    UFUNCTION()
    void ActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex);
    
};


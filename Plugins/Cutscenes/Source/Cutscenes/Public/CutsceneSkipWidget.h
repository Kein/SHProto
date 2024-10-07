#pragma once
#include "CoreMinimal.h"
#include "UE4InputActionHandle.h"
#include "BUserWidget.h"
#include "CutsceneSkipWidget.generated.h"

class UGameTextsConfig;
class UPanelWidget;
class UStyledRichTextBlock;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class CUTSCENES_API UCutsceneSkipWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FUE4InputActionHandle SkipAction;
    
    UPROPERTY(EditAnywhere)
    FUE4InputActionHandle InGameMenuAction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SkipHoldTime;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
    UPROPERTY(EditDefaultsOnly)
    UGameTextsConfig* GameTextsConfig;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseKeyTag;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* Key_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Debug_panel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* SkipedFadeOut_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* ButtonInfo_anim;
    
public:
    UCutsceneSkipWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetApplied();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipTick(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipStart();
    
    UFUNCTION()
    void OnSkipedFadeOutAnim();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipCancel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkip();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOutStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOutEnd();
    
    UFUNCTION()
    void OnFadeInAnim();
    
    UFUNCTION()
    void OnFadedOutAnim();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDebugTick(float ActualTime, float TotalTime);
    
    UFUNCTION(BlueprintPure)
    bool GetCanSkip() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FadedOut();
    
};


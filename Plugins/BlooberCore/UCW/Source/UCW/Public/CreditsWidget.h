#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsWidget.generated.h"

class UAkAudioEvent;
class UScrollBox;
class UWidgetAnimation;

UCLASS(EditInlineNew)
class UCW_API UCreditsWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UScrollBox* Credits_srb;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn_anim;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut_anim;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* CreditMusic;
    
    UPROPERTY(EditAnywhere)
    float SkipHoldTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseExternalSkip;
    
    UPROPERTY(EditAnywhere)
    float AutoScrollStartDelay;
    
    UPROPERTY(EditAnywhere)
    float AutoScrollSpeed;
    
    UPROPERTY(EditAnywhere)
    float FadeAfterScrollEndDelay;
    
    UPROPERTY(EditAnywhere)
    bool AutoStartPlay;
    
    UPROPERTY(EditAnywhere)
    bool AutoFadeOut;
    
    UPROPERTY(EditAnywhere)
    bool AutoDestroy;
    
    UPROPERTY(EditAnywhere)
    float FadeOutTime;
    
public:
    UCreditsWidget();

    UFUNCTION(BlueprintCallable)
    void Skip();
    
    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void PlayScroll();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipTick(float Progress);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkipCancel();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSkip();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnScrollingStart();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnScrollingFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFadeOutStart();
    
    UFUNCTION()
    void OnFadedOutAnim();
    
    UFUNCTION()
    void OnFadedInAnim();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFullyScrolled() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOut();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnFadeOutEnd();
    
};


#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "BUserWidget.h"
#include "SHGameplayEndGameWidget.generated.h"

class UAkAudioEvent;
class UUCWSkipWidget;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(EditInlineNew)
class USHGameplayEndGameWidget : public UBUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UWidgetSwitcher* Main_switcher;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UUCWSkipWidget* Skip_wdg;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeIn;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UWidgetAnimation* FadeOut;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> MusicStart;
    
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* MusicEnd;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> LeaveEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> TrueLeaveEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> InWaterEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> TrueInWaterEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> MariaEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> RebirthEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> DogEndingMusicStart;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> UFOEndingMusicStart;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
public:
    USHGameplayEndGameWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHide();
    
    UFUNCTION(BlueprintCallable)
    void Continue();
    
    UFUNCTION()
    void ActiveWidgetChanged(UWidget* ActiveWidget, int32 ActiveWidgetIndex);
    
};


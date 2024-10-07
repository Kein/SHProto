#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Components/Widget.h"
#include "BVolumeControlStyle.h"
#include "OnMutedChangedEventDelegate.h"
#include "OnVolumeChangedEventDelegate.h"
#include "OnWidgetHoverEventDelegate.h"
#include "BVolumeControl.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS()
class UCW_API UBVolumeControl : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin SpeakerIconPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBVolumeControlStyle WidgetStyle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool MouseUsesStep;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StepSize;
    
    UPROPERTY(EditAnywhere)
    float Volume;
    
    UPROPERTY()
    UWidget::FGetFloat VolumeDelegate;
    
    UPROPERTY(EditAnywhere)
    bool Muted;
    
    UPROPERTY()
    UWidget::FGetBool MutedDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkRtpc* RTPCParameter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bHasCustomMusic;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* HoveredAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* UnhoveredAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ChangedAkEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnVolumeChangedEvent OnVolumeChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnMutedChangedEvent OnMutedChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    bool ControllLabelVisibility;
    
    UPROPERTY(Instanced)
    UWidget* Label;
    
public:
    UBVolumeControl();

    UFUNCTION(BlueprintCallable)
    void SetVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMuted(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(UWidget* InContent);
    
    UFUNCTION(BlueprintPure)
    bool IsMuted() const;
    
    UFUNCTION(BlueprintPure)
    float GetVolume() const;
    
};


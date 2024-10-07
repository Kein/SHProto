#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Sound/SlateSound.h"
#include "Components/Slider.h"
#include "OnKeyDownEventDelegate.h"
#include "OnKeyUpEventDelegate.h"
#include "OnWidgetFocusEventDelegate.h"
#include "OnWidgetHoverEventDelegate.h"
#include "BSlider.generated.h"

class UAkAudioEvent;
class UWidget;

UCLASS()
class UCW_API UBSlider : public USlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnUnfocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyDownEvent OnKeyDown;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyUpEvent OnKeyUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool HoverOnFocus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoverSliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HoverSliderHandleColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ActiveSliderBarColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ActiveSliderHandleColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* HoveredAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ChangedAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound HoveredSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSlateSound;
    
protected:
    UPROPERTY(EditAnywhere)
    bool ControllLabelVisibility;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Label;
    
public:
    UBSlider();

    UFUNCTION(BlueprintCallable)
    void SetLabel(UWidget* InContent);
    
    UFUNCTION(BlueprintPure)
    bool HasInputCaptured() const;
    
};


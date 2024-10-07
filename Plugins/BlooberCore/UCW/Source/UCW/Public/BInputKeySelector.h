#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Framework/Text/TextLayout.h"
#include "Framework/Commands/InputChord.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/ContentWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BButtonStyle.h"
#include "HoverablePressableStyle.h"
#include "OnWidgetFocusEventDelegate.h"
#include "OnWidgetHoverEventDelegate.h"
#include "TextButtonStyle.h"
#include "BInputKeySelector.generated.h"

class UAkAudioEvent;

UCLASS()
class UCW_API UBInputKeySelector : public UContentWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKeySelectedEvent, const FInputChord, SelectedKey);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIsSelectingKeyChangedEvent);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHoverablePressableStyle AkEventsStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* ResetAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAkAudioEvent* KeyChangedAkEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bNoLabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsLabelFirst;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateChildSize KeyTextSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextButtonStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinDesiredWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AutoWrapText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WrapTextAt;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ETextWrappingPolicy WrappingPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FMargin Margin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText KeySelectionText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText NoKeySpecifiedText;
    
    UPROPERTY(BlueprintReadOnly)
    FInputChord SelectedKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowGamepadKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAllowModifierKeys;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bGamepadKeysOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bAnalogOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FKey> EscapeKeys;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnUnfocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeySelectedEvent OnKeySelected;
    
    UPROPERTY(BlueprintAssignable)
    FOnIsSelectingKeyChangedEvent OnIsSelectingKeyChanged;
    
    UBInputKeySelector();

    UFUNCTION(BlueprintCallable)
    void SetSelectedKey(const FInputChord& InSelectedKey);
    
    UFUNCTION(BlueprintCallable)
    void SetLabelText(FText InText);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintPure)
    bool GetIsSelectingKey() const;
    
};


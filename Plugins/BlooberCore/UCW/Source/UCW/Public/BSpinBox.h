#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "Components/Widget.h"
#include "BSpinBoxStyle.h"
#include "HoverablePressableStyle.h"
#include "OnWidgetFocusEventDelegate.h"
#include "OnWidgetHoverEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "BSpinBox.generated.h"

class UCommonTextScrollStyle;
class UMaterialInstanceDynamic;
class UUCWSpinBoxStyle;

UCLASS()
class UCW_API UBSpinBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpinBoxValueChangedEvent, int32, Value);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWSpinBoxStyle> Style;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ContentColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ContentColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> IndicatorVerticalAlignment;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> DefaultOptions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowArrowsIn2State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowBottomIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBSpinBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHoverablePressableStyle AkEventsStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
protected:
    UPROPERTY(EditAnywhere)
    bool WrapValues;
    
    UPROPERTY(EditAnywhere)
    bool SpinOnNavigation;
    
    UPROPERTY(EditAnywhere)
    bool SpinOnClick;
    
    UPROPERTY(EditAnywhere)
    bool ToggleableIn2State;
    
    UPROPERTY(EditAnywhere)
    bool ControllLabelVisibility;
    
    UPROPERTY(Instanced)
    UWidget* Label;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnUnfocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonPressedEvent OnPressed;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonReleasedEvent OnReleased;
    
    UPROPERTY(BlueprintAssignable)
    FOnSpinBoxValueChangedEvent OnValueChanged;
    
    UPROPERTY(EditAnywhere)
    float MobileFontSizeMultiplier;
    
protected:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SingleMaterialStyleMID;
    
    UPROPERTY()
    FBSpinBoxStyle NormalStyle;
    
    UPROPERTY()
    FTextBlockStyle NormalTextStyle;
    
public:
    UBSpinBox();

    UFUNCTION(BlueprintCallable)
    void SetValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UUCWSpinBoxStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedOption(int32 Option);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FText>& Options, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(UWidget* InContent);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollState();
    
    UFUNCTION(BlueprintPure)
    int32 GetValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedOption() const;
    
};


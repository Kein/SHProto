#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Components/ContentWidget.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "Components/Button.h"
#include "BButtonStyle.h"
#include "HoverablePressableStyle.h"
#include "OnKeyDownEventDelegate.h"
#include "OnKeyUpEventDelegate.h"
#include "OnWidgetFocusEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "BButton.generated.h"

class UMaterialInstanceDynamic;
class UUCWButtonStyle;

UCLASS()
class UCW_API UBButton : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UUCWButtonStyle> Style;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* SingleMaterialStyleMID;
    
    UPROPERTY()
    FBButtonStyle NormalStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBButtonStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHoverablePressableStyle AkEventsStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor BackgroundColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonClickedEvent OnClicked;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonPressedEvent OnPressed;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonReleasedEvent OnReleased;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnButtonHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnUnfocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyDownEvent OnKeyDownEvent;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyUpEvent OnKeyUpEvent;
    
    UBButton();

    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UUCWButtonStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetBackgroundColor(FLinearColor InBackgroundColor);
    
    UFUNCTION(BlueprintPure)
    bool IsPressed() const;
    
};


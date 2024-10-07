#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "Framework/Text/TextLayout.h"
#include "Styling/SlateTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateTypes.h"
#include "HoverableTextStyle.h"
#include "OnWidgetHoverEventDelegate.h"
#include "Components/Widget.h"
#include "InputKeyActionSelector.generated.h"

UCLASS()
class UCSW_API UInputKeyActionSelector : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectionChangedEvent, int32, Value);
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Brush;
    
    UPROPERTY()
    UWidget::FGetSlateBrush BrushDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin TextPadding;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool ImageFirst;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    bool IsShowMode;
    
    UPROPERTY(EditAnywhere)
    TArray<FText> DefaultOptions;
    
    UPROPERTY(EditAnywhere)
    int32 SelectedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHoverableTextStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor NotSelectedTextColorAndOpacity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateBrush StrikeBrush;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D ShadowOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ShadowColorAndOpacity;
    
    UPROPERTY()
    UWidget::FGetLinearColor ShadowColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FComboBoxStyle ComboBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTableRowStyle ItemStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin ComboBoxPadding;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float MaxListHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool HasDownArrow;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool EnableGamepadNavigationMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectionChangedEvent OnSelectionChanged;
    
    UInputKeyActionSelector();

    UFUNCTION(BlueprintCallable)
    void SetSelectedOption(int32 Option);
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedOption() const;
    
};


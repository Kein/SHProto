#pragma once
#include "CoreMinimal.h"
#include "Framework/Text/TextLayout.h"
#include "Types/SlateEnums.h"
#include "Components/ComboBoxString.h"
#include "HoverableTextStyle.h"
#include "OnKeyDownEventDelegate.h"
#include "OnKeyUpEventDelegate.h"
#include "OnWidgetFocusEventDelegate.h"
#include "OnWidgetHoverEventDelegate.h"
#include "BComboBoxString.generated.h"

class UWidget;

UCLASS()
class UCW_API UBComboBoxString : public UComboBoxString {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSelectionIndexChangedEvent, int32, SelectedItem, TEnumAsByte<ESelectInfo::Type>, SelectionType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemHoveredDelegate, const FString&, ItemName, int32, ItemIndex);
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnFocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetFocusEvent OnUnfocused;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnItemHoveredDelegate OnItemHovered;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyDownEvent OnKeyDown;
    
    UPROPERTY(BlueprintAssignable)
    FOnKeyUpEvent OnKeyUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHoverableTextStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETextJustify::Type> Justification;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectionIndexChangedEvent OnSelectionIndexChanged;
    
protected:
    UPROPERTY(EditAnywhere)
    bool ControllLabelVisibility;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Label;
    
public:
    UBComboBoxString();

    UFUNCTION(BlueprintCallable)
    void SetStyle(const FHoverableTextStyle& InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedOptionIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetOptions(const TArray<FText>& Options, int32 Num, bool PreserveSelection);
    
    UFUNCTION(BlueprintCallable)
    void SetLabel(UWidget* InContent);
    
    UFUNCTION(BlueprintPure)
    bool HasInputCaptured() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedOptionIndex() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/CheckBox.h"
#include "OnKeyDownEventDelegate.h"
#include "OnKeyUpEventDelegate.h"
#include "OnWidgetFocusEventDelegate.h"
#include "OnWidgetHoverEventDelegate.h"
#include "BCheckBox.generated.h"

class UTextBlock;
class UWidget;

UCLASS()
class UCW_API UBCheckBox : public UCheckBox {
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
    bool _HoverOnFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseInternalLabel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor UncheckedLabelColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor CheckedLabelColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor UncheckedHoverLabelColor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor CheckedHoverLabelColor;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Label;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextBlock* InternalLabel;
    
public:
    UBCheckBox();

    UFUNCTION(BlueprintCallable)
    void SetLabel(UWidget* InContent);
    
    UFUNCTION(BlueprintCallable)
    void SetInternalLabel(UTextBlock* InContent);
    
};


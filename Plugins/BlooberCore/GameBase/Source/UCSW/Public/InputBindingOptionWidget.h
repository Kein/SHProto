#pragma once
#include "CoreMinimal.h"
#include "HoverableTextStyle.h"
#include "Blueprint/UserWidget.h"
#include "InputBindingOptionWidget.generated.h"

class UBCheckBox;
class UBInputKeySelector;
class UImage;
class UWidget;

UCLASS(Abstract, EditInlineNew)
class UCSW_API UInputBindingOptionWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIs1stColumnPCOnly;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIs2ndColumnPCOnly;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIs3rdColumnPCOnly;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBInputKeySelector* Value_wdg;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBInputKeySelector* Value1_wdg;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBInputKeySelector* Value2_wdg;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UBCheckBox* Toggle_ckb;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UWidget* Label_wdg;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UImage* Conflict_img;
    
    UPROPERTY(EditAnywhere)
    bool bUseTag;
    
    UPROPERTY(EditAnywhere)
    bool bUseKeyTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FHoverableTextStyle Style;
    
public:
    UInputBindingOptionWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLabelTextChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnConflictStateChanged(bool IsInConflict);
    
};


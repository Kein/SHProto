#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ControlTipWidget.generated.h"

class UStyledRichTextBlock;
class UTextLayoutWidget;

UCLASS(EditInlineNew)
class UCSW_API UControlTipWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* Key_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextLayoutWidget* Description_txt;
    
    UPROPERTY(EditDefaultsOnly)
    FString KeyTagText;
    
    UPROPERTY(EditDefaultsOnly)
    FString SeparatorText;
    
public:
    UControlTipWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh(const FText& Description, const FText& Keys);
    
};


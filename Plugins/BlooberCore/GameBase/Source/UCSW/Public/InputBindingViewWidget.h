#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InputBindingViewWidget.generated.h"

class UStyledRichTextBlock;
class UTextLayoutWidget;

UCLASS(Abstract, EditInlineNew)
class UCSW_API UInputBindingViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UStyledRichTextBlock* Keys_rtx;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextLayoutWidget* Actions_txt;
    
    UPROPERTY(EditAnywhere)
    FString KeyTagText;
    
    UPROPERTY(EditAnywhere)
    FString SeparatorText;
    
public:
    UInputBindingViewWidget();

};


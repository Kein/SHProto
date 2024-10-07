#pragma once
#include "CoreMinimal.h"
#include "AskReloadWidget.h"
#include "SHAskReloadWidget.generated.h"

class UTextLayoutWidget;

UCLASS(EditInlineNew)
class USHAskReloadWidget : public UAskReloadWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FText TimeInfoFormatText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextLayoutWidget* Info_txt;
    
public:
    USHAskReloadWidget();

};


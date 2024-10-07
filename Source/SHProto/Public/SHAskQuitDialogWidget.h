#pragma once
#include "CoreMinimal.h"
#include "AskDialogWidget.h"
#include "SHAskQuitDialogWidget.generated.h"

class UTextLayoutWidget;

UCLASS(EditInlineNew)
class USHAskQuitDialogWidget : public UAskDialogWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText QuitInfoText;
    
    UPROPERTY(EditAnywhere)
    FText ExitInfoText;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UTextLayoutWidget* Info_txt;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsExitGame;
    
public:
    USHAskQuitDialogWidget();

};


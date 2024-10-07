#pragma once
#include "CoreMinimal.h"
#include "StateWidgetInterface.h"
#include "AskDialogWidget.h"
#include "AskReloadWidget.generated.h"

class UWidget;

UCLASS(EditInlineNew)
class UCSW_API UAskReloadWidget : public UAskDialogWidget, public IStateWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Ask_Panel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxTimeFromStartSec;
    
public:
    UAskReloadWidget();


    // Fix for true pure virtual functions not being implemented
};


#pragma once
#include "CoreMinimal.h"
#include "AskDialogWidget.h"
#include "EventReceiverInterface.h"
#include "StateWidgetInterface.h"
#include "LostPadWidget.generated.h"

class UWidget;

UCLASS(EditInlineNew)
class GAMEBASE_API ULostPadWidget : public UAskDialogWidget, public IStateWidgetInterface, public IEventReceiverInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* SwitchUser_info;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UWidget* Cancel_info;
    
public:
    ULostPadWidget();

protected:
    UFUNCTION(BlueprintPure)
    bool IsInfoTypeDisconnected() const;
    

    // Fix for true pure virtual functions not being implemented
};


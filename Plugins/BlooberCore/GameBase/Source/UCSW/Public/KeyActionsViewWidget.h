#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputBindingViewWidget.h"
#include "KeyActionsViewWidget.generated.h"

UCLASS(EditInlineNew)
class UCSW_API UKeyActionsViewWidget : public UInputBindingViewWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(EditAnywhere)
    bool bShowSingleAction;
    
    UPROPERTY(EditAnywhere)
    FText NoActionText;
    
public:
    UKeyActionsViewWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh();
    
};


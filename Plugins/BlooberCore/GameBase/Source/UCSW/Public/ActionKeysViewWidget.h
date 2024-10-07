#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "InputBindingViewWidget.h"
#include "ActionKeysViewWidget.generated.h"

UCLASS(EditInlineNew)
class UCSW_API UActionKeysViewWidget : public UInputBindingViewWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FUE4InputHandle action;
    
    UPROPERTY(EditAnywhere)
    bool bPCKeysOnly;
    
    UPROPERTY(EditAnywhere)
    bool bGamepadKeysOnly;
    
    UPROPERTY(EditAnywhere)
    bool bShowSingleKey;
    
    UPROPERTY(EditAnywhere)
    bool bPlus1stForAxis;
    
    UPROPERTY(EditDefaultsOnly)
    FText NoKeysText;
    
public:
    UActionKeysViewWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRefresh();
    
};


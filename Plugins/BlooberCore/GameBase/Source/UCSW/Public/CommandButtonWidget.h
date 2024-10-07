#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CommandButtonWidget.generated.h"

class UBButton;

UCLASS(EditInlineNew)
class UCommandButtonWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UBButton* Slot_but;
    
    UCommandButtonWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetText(const FText& Text);
    
};


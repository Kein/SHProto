#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CreditsItem.h"
#include "UCWCreditsRowWidget.generated.h"

UCLASS(EditInlineNew)
class UCW_API UUCWCreditsRowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUCWCreditsRowWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetText(const FText& Text, const FText& Text2, const FText& Text3);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetData(const FCreditsItem& Item);
    
};


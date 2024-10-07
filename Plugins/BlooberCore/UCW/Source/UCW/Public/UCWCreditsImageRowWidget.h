#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Blueprint/UserWidget.h"
#include "UCWCreditsImageRowWidget.generated.h"

UCLASS(EditInlineNew)
class UCW_API UUCWCreditsImageRowWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UUCWCreditsImageRowWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnSetBrush(const FSlateBrush& Brush);
    
};


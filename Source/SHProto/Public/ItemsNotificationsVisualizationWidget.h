#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ItemsNotificationsVisualizationWidget.generated.h"

UCLASS(EditInlineNew)
class UItemsNotificationsVisualizationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UItemsNotificationsVisualizationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Update(bool bShow);
    
};


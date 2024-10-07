#pragma once
#include "CoreMinimal.h"
#include "UCWTabButton.h"
#include "SettingsTabButtonWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class UCSW_API USettingsTabButtonWidget : public UUCWTabButton {
    GENERATED_BODY()
public:
    USettingsTabButtonWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPanelStateChanged(bool WasChanged);
    
};


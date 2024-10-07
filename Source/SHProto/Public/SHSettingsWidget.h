#pragma once
#include "CoreMinimal.h"
#include "SettingsWidget.h"
#include "SHSettingsWidget.generated.h"

UCLASS(EditInlineNew)
class USHSettingsWidget : public USettingsWidget {
    GENERATED_BODY()
public:
    USHSettingsWidget();

    UFUNCTION(BlueprintCallable)
    void OnDlcDataUpdatedHandle();
    
};


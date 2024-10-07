#pragma once
#include "CoreMinimal.h"
#include "UCSWMainMenuWidget.h"
#include "SHBaseMainMenuWidget.generated.h"

class UDataTable;
class USHSettingsWidget;

UCLASS(Abstract, EditInlineNew)
class USHBaseMainMenuWidget : public UUCSWMainMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHSettingsWidget* Settings_wdg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* SavePointInfos;
    
public:
    USHBaseMainMenuWidget();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDlcDataUpdated();
    
};


#pragma once
#include "CoreMinimal.h"
#include "AskNewGameSettingsWidget.h"
#include "SpawnPointsPanelWidget.generated.h"

class USpawnPointsListWidget;

UCLASS(EditInlineNew)
class USpawnPointsPanelWidget : public UAskNewGameSettingsWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USpawnPointsListWidget* SpawnPoints_wdg;
    
    USpawnPointsPanelWidget();

};


#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SHGameplayEndGamePanelWidget.h"
#include "SHGameplayStatisticsData.h"
#include "SHGameplayEndGameStatsWidget.generated.h"

UCLASS(EditInlineNew)
class USHGameplayEndGameStatsWidget : public USHGameplayEndGamePanelWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> ContinueKeys;
    
    UPROPERTY(BlueprintReadOnly)
    FSHGameplayStatisticsData GameplayStatisticsData;
    
public:
    USHGameplayEndGameStatsWidget();

};


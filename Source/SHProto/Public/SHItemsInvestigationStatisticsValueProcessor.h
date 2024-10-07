#pragma once
#include "CoreMinimal.h"
#include "SHStatisticsValueProcessor.h"
#include "SHItemsInvestigationStatisticsValueProcessor.generated.h"

class USHCharacterPlayItemsComponent;

UCLASS()
class SHPROTO_API USHItemsInvestigationStatisticsValueProcessor : public USHStatisticsValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 MapItemsInvestigated;
    
    UPROPERTY(SaveGame)
    bool bHasEverEnabledRadio;
    
    UPROPERTY(SaveGame)
    bool bIsWatchingEverEnabledRadio;
    
public:
    USHItemsInvestigationStatisticsValueProcessor();

protected:
    UFUNCTION()
    void ProcessEquipmentItemSpawned(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
    UFUNCTION()
    void ProcessCollectedOrLevelItemInvestigated(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
};


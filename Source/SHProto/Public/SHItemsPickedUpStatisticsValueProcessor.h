#pragma once
#include "CoreMinimal.h"
#include "SHStatisticsValueProcessor.h"
#include "SHItemsPickedUpStatisticsValueProcessor.generated.h"

class USHCharacterPlayItemsComponent;

UCLASS()
class SHPROTO_API USHItemsPickedUpStatisticsValueProcessor : public USHStatisticsValueProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    int32 ConsumableItemsPickedUp;
    
    UPROPERTY(SaveGame)
    TArray<FName> MemosItemsPickedUp;
    
public:
    USHItemsPickedUpStatisticsValueProcessor();

protected:
    UFUNCTION()
    void ProcessLevelItemGrabbedOrInvestigated(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
    UFUNCTION()
    void ProcessItemCollected(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext);
    
};


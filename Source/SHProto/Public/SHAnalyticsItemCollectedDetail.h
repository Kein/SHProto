#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsItemCollectedDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsItemCollectedDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString ItemName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 Quantity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString ObjectName;
    
    SHPROTO_API FSHAnalyticsItemCollectedDetail();
};


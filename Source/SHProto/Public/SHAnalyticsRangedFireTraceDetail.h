#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsRangedFireTraceDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsRangedFireTraceDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float TraceDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bHitEnemy;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString ObjectName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bIsPenetrating;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString ComponentName;
    
    SHPROTO_API FSHAnalyticsRangedFireTraceDetail();
};


#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsRangedFireTraceDetail.h"
#include "SHAnalyticsRangedFireDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsRangedFireDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString WeaponName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 AmmoAfter;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsRangedFireTraceDetail> Traces;
    
    SHPROTO_API FSHAnalyticsRangedFireDetail();
};


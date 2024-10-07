#pragma once
#include "CoreMinimal.h"
#include "ESHAnalyticsGameplayEventType.h"
#include "SHAnalyticsGameplayEvent.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsGameplayEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    double PlayTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    ESHAnalyticsGameplayEventType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 DetailIndex;
    
    SHPROTO_API FSHAnalyticsGameplayEvent();
};


#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsPlayerReceivedDamageDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsPlayerReceivedDamageDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString Causer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString DamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    float DamageValue;
    
    SHPROTO_API FSHAnalyticsPlayerReceivedDamageDetail();
};


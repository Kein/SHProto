#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsGameFlowDetail.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsGameFlowDetail {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FString ObjectName;
    
    SHPROTO_API FSHAnalyticsGameFlowDetail();
};


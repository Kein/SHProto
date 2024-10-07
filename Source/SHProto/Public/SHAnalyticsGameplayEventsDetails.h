#pragma once
#include "CoreMinimal.h"
#include "SHAnalyticsAICharacterDiedDetail.h"
#include "SHAnalyticsGameFlowDetail.h"
#include "SHAnalyticsItemCollectedDetail.h"
#include "SHAnalyticsMeleeAttackDetail.h"
#include "SHAnalyticsPlayerReceivedDamageDetail.h"
#include "SHAnalyticsRangedFireDetail.h"
#include "SHAnalyticsGameplayEventsDetails.generated.h"

USTRUCT(BlueprintType)
struct FSHAnalyticsGameplayEventsDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsGameFlowDetail> GameFlowDetails;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsItemCollectedDetail> ItemCollectedDetails;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsRangedFireDetail> RangedFireDetails;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsMeleeAttackDetail> MeleeAttackDetails;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsPlayerReceivedDamageDetail> PlayerReceivedDamageDetails;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FSHAnalyticsAICharacterDiedDetail> AICharacterDiedDetails;
    
    SHPROTO_API FSHAnalyticsGameplayEventsDetails();
};


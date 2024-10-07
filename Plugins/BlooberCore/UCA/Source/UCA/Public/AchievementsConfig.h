#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AchievementCounterConfig.h"
#include "AchievementsConfig.generated.h"

UCLASS(BlueprintType)
class UCA_API UAchievementsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FAchievementCounterConfig> Counters;
    
    UAchievementsConfig();

};


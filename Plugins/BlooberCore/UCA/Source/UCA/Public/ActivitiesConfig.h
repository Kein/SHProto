#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ActivityConfig.h"
#include "ZoneConfig.h"
#include "ActivitiesConfig.generated.h"

UCLASS(BlueprintType)
class UCA_API UActivitiesConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FActivityConfig> Activities;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FZoneConfig> Zones;
    
    UActivitiesConfig();

};


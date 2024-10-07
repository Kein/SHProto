#pragma once
#include "CoreMinimal.h"
#include "FoliageInstanceInfo.h"
#include "FoliageItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FFoliageItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString FoliageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FFoliageInstanceInfo> Instances;
    
    FOLIAGESTAMPS_API FFoliageItemInfo();
};


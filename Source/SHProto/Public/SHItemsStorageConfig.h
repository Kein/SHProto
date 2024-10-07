#pragma once
#include "CoreMinimal.h"
#include "ESHGameplaySection.h"
#include "ESHItemTypeEnum.h"
#include "SHItemsStorageConfig.generated.h"

USTRUCT(BlueprintType)
struct FSHItemsStorageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHItemTypeEnum> ItemTypesWhitelist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHGameplaySection> GameplaySectionsWhitelist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ESHGameplaySection> GameplaySectionsBlacklist;
    
    SHPROTO_API FSHItemsStorageConfig();
};


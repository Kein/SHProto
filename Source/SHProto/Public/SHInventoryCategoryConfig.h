#pragma once
#include "CoreMinimal.h"
#include "ESHGameplaySection.h"
#include "ESHItemTypeEnum.h"
#include "SHInventoryCategoryConfig.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHInventoryCategoryConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ESHItemTypeEnum> AllowedItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsSubcategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHGameplaySection GameplaySectionFilter;
    
    FSHInventoryCategoryConfig();
};


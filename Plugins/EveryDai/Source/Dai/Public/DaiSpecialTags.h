#pragma once
#include "CoreMinimal.h"
#include "DaiSpecialTags.generated.h"

USTRUCT()
struct DAI_API FDaiSpecialTags {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    FName _OwnerTag;
    
    UPROPERTY(Config)
    FName _CallerTag;
    
    FDaiSpecialTags();
};


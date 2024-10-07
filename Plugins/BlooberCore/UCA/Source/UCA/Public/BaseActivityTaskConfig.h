#pragma once
#include "CoreMinimal.h"
#include "BaseActivityTaskConfig.generated.h"

USTRUCT()
struct FBaseActivityTaskConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    uint32 Flags;
    
    UCA_API FBaseActivityTaskConfig();
};


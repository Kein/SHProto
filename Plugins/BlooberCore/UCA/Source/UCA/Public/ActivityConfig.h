#pragma once
#include "CoreMinimal.h"
#include "ActivityTaskConfig.h"
#include "ActivityConfig.generated.h"

USTRUCT(BlueprintType)
struct FActivityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FActivityTaskConfig> Tasks;
    
    UPROPERTY(VisibleAnywhere)
    uint32 Flags;
    
    UCA_API FActivityConfig();
};


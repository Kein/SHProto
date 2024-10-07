#pragma once
#include "CoreMinimal.h"
#include "ActivitySubTaskConfig.h"
#include "BaseActivityTaskConfig.h"
#include "ActivityTaskConfig.generated.h"

USTRUCT()
struct FActivityTaskConfig : public FBaseActivityTaskConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditFixedSize, VisibleAnywhere)
    TArray<FActivitySubTaskConfig> SubTasks;
    
    UCA_API FActivityTaskConfig();
};


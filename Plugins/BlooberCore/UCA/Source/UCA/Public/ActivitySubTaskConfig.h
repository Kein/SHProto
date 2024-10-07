#pragma once
#include "CoreMinimal.h"
#include "BaseActivityTaskConfig.h"
#include "ActivitySubTaskConfig.generated.h"

USTRUCT()
struct FActivitySubTaskConfig : public FBaseActivityTaskConfig {
    GENERATED_BODY()
public:
    UCA_API FActivitySubTaskConfig();
};


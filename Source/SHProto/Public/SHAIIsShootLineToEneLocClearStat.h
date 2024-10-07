#pragma once
#include "CoreMinimal.h"
#include "SHAIIsShootLineToEnemyClearStat.h"
#include "SHAIIsShootLineToEneLocClearStat.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAIIsShootLineToEneLocClearStat : public USHAIIsShootLineToEnemyClearStat {
    GENERATED_BODY()
public:
    USHAIIsShootLineToEneLocClearStat(const FObjectInitializer& ObjectInitializer);

};


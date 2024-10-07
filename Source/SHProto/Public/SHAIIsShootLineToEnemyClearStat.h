#pragma once
#include "CoreMinimal.h"
#include "MaiIsShootLineToEnemyClearStat.h"
#include "SHAIIsShootLineToEnemyClearStat.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHAIIsShootLineToEnemyClearStat : public UMaiIsShootLineToEnemyClearStat {
    GENERATED_BODY()
public:
    USHAIIsShootLineToEnemyClearStat(const FObjectInitializer& ObjectInitializer);

};


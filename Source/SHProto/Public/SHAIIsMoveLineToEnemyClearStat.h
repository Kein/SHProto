#pragma once
#include "CoreMinimal.h"
#include "MaiIsMoveLineToEnemyClearStat.h"
#include "SHAIIsMoveLineToEnemyClearStat.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHAIIsMoveLineToEnemyClearStat : public UMaiIsMoveLineToEnemyClearStat {
    GENERATED_BODY()
public:
    USHAIIsMoveLineToEnemyClearStat(const FObjectInitializer& ObjectInitializer);

};


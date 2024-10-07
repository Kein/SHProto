#pragma once
#include "CoreMinimal.h"
#include "MaiIsLineToEnemyClearStat.h"
#include "MaiIsMoveLineToEnemyClearStat.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiIsMoveLineToEnemyClearStat : public UMaiIsLineToEnemyClearStat {
    GENERATED_BODY()
public:
    UMaiIsMoveLineToEnemyClearStat(const FObjectInitializer& ObjectInitializer);

};


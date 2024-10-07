#pragma once
#include "CoreMinimal.h"
#include "MaiIsLineToEnemyClearStat.h"
#include "MaiIsShootLineToEnemyClearStat.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiIsShootLineToEnemyClearStat : public UMaiIsLineToEnemyClearStat {
    GENERATED_BODY()
public:
    UMaiIsShootLineToEnemyClearStat(const FObjectInitializer& ObjectInitializer);

};


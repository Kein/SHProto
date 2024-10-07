#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "MaiBTTask_BlueprintBase.generated.h"

UCLASS(Abstract)
class MAI_API UMaiBTTask_BlueprintBase : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UMaiBTTask_BlueprintBase();

};


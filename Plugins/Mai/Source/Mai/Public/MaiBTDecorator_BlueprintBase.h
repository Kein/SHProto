#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "MaiBTDecorator_BlueprintBase.generated.h"

UCLASS(Abstract)
class MAI_API UMaiBTDecorator_BlueprintBase : public UBTDecorator_BlueprintBase {
    GENERATED_BODY()
public:
    UMaiBTDecorator_BlueprintBase();

};


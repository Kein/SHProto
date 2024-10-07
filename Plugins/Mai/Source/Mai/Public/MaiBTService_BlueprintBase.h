#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "MaiBTService_BlueprintBase.generated.h"

UCLASS(Abstract)
class MAI_API UMaiBTService_BlueprintBase : public UBTService_BlueprintBase {
    GENERATED_BODY()
public:
    UMaiBTService_BlueprintBase();

};


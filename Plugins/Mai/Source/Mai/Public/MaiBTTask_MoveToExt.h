#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "MaiBTTask_MoveToExt.generated.h"

UCLASS(BlueprintType)
class MAI_API UMaiBTTask_MoveToExt : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _RepathOnGoalMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RepathTestPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _RepathTestDistance;
    
    UMaiBTTask_MoveToExt();

};


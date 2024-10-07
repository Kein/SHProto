#pragma once
#include "CoreMinimal.h"
#include "DaiConditions.h"
#include "DaiNotifies.h"
#include "MaiWork.generated.h"

class UBehaviorTree;
class UMaiAction;

USTRUCT(BlueprintType)
struct MAI_API FMaiWork {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _UseSingleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UMaiAction* _Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UBehaviorTree* _Behavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiConditions _Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDaiNotifies _Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _Weight;
    
    FMaiWork();
};


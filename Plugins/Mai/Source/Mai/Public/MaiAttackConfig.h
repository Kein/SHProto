#pragma once
#include "CoreMinimal.h"
#include "DaiConditions.h"
#include "Engine/DataTable.h"
#include "MaiAttackConfig.generated.h"

class UMaiAttack;

USTRUCT(BlueprintType)
struct MAI_API FMaiAttackConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 _Weight;
    
    UPROPERTY(EditAnywhere)
    FDaiConditions _Conditions;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle _AttackRow;
    
    UPROPERTY(Instanced, VisibleInstanceOnly)
    UMaiAttack* _Attack;
    
    FMaiAttackConfig();
};


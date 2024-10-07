#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MaiExtMovementAttack.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiExtMovementAttack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle _AttackRow;
    
    FMaiExtMovementAttack();
};


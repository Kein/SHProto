#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/DataTable.h"
#include "MaiExtMovementAttack.h"
#include "AnimNotify_ExtMovementCheckAtack.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_ExtMovementCheckAtack : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FMaiExtMovementAttack _DifficultyConfig[10];
    
    UPROPERTY()
    FDataTableRowHandle _AttackRow;
    
public:
    UAnimNotify_ExtMovementCheckAtack();

};


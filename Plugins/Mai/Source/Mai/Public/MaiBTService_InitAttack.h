#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/DataTable.h"
#include "MaiBTService_InitAttack.generated.h"

UCLASS()
class MAI_API UMaiBTService_InitAttack : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _Target;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle _AttackRow;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _AttackKey;
    
    UPROPERTY(EditAnywhere)
    bool _AttackFromKey;
    
    UMaiBTService_InitAttack();

};


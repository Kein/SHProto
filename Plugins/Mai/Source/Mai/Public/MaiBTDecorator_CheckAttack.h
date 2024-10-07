#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Engine/DataTable.h"
#include "MaiBTDecorator_CheckAttack.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_CheckAttack : public UBTDecorator {
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
    
    UPROPERTY(EditAnywhere)
    bool _CheckRange;
    
    UPROPERTY(EditAnywhere)
    bool _CheckCone;
    
    UPROPERTY(EditAnywhere)
    bool _CheckVisibility;
    
    UPROPERTY(EditAnywhere)
    bool _StealToken;
    
    UMaiBTDecorator_CheckAttack();

};


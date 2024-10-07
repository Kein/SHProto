#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTService_LockAttackPosition.generated.h"

UCLASS()
class MAI_API UMaiBTService_LockAttackPosition : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector AttackLocation;
    
    UMaiBTService_LockAttackPosition();

};


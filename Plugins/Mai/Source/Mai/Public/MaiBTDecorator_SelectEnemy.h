#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTDecorator_WithInterval.h"
#include "MaiBTDecorator_SelectEnemy.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_SelectEnemy : public UMaiBTDecorator_WithInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _Target;
    
    UMaiBTDecorator_SelectEnemy();

};


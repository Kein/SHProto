#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTDecorator_WithInterval.h"
#include "MaiBTDecorator_CanStealAnyToken.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_CanStealAnyToken : public UMaiBTDecorator_WithInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _Enemy;
    
    UMaiBTDecorator_CanStealAnyToken();

};


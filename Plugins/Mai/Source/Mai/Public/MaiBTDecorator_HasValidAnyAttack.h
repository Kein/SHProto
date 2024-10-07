#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTDecorator_WithInterval.h"
#include "MaiBTDecorator_HasValidAnyAttack.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_HasValidAnyAttack : public UMaiBTDecorator_WithInterval {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _Enemy;
    
    UPROPERTY(EditAnywhere)
    bool _CheckCone;
    
    UPROPERTY(EditAnywhere)
    bool _StealToken;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float _MinCheckPeriod;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float _MaxCheckPeriod;
    
    UMaiBTDecorator_HasValidAnyAttack();

};


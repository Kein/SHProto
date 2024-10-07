#pragma once
#include "CoreMinimal.h"
#include "MaiAttackerConfig.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct MAI_API FMaiAttackerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* _AttacksTree;
    
    UPROPERTY(EditAnywhere)
    UBehaviorTree* _CountersTree;
    
    UPROPERTY(EditAnywhere)
    float _DelayAfterAttack;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> _IgnoreLocks;
    
    FMaiAttackerConfig();
};


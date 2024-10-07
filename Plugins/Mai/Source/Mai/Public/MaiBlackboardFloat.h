#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBlackboardFloat.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiBlackboardFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FBlackboardKeySelector _Entry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _DirectValue;
    
    FMaiBlackboardFloat();
};


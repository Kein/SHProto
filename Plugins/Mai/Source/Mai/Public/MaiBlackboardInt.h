#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBlackboardInt.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiBlackboardInt {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _Entry;
    
    UPROPERTY(EditAnywhere)
    int32 _Value;
    
    UPROPERTY(EditAnywhere)
    bool _DirectValue;
    
    FMaiBlackboardInt();
};


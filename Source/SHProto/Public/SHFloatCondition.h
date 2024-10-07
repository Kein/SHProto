#pragma once
#include "CoreMinimal.h"
#include "ESHFloatOperationType.h"
#include "SHFloatCondition.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHFloatCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHFloatOperationType OperationType;
    
    FSHFloatCondition();
};
FORCEINLINE uint32 GetTypeHash(const FSHFloatCondition) { return 0; }


#pragma once
#include "CoreMinimal.h"
#include "ESHIntOperationType.h"
#include "SHIntCondition.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHIntCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Value;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHIntOperationType OperationType;
    
    FSHIntCondition();
};
FORCEINLINE uint32 GetTypeHash(const FSHIntCondition) { return 0; }


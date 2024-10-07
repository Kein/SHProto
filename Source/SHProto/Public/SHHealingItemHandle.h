#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SHHealingItemHandle.generated.h"

USTRUCT(BlueprintType)
struct FSHHealingItemHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle ItemHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HealingValue;
    
    SHPROTO_API FSHHealingItemHandle();
};


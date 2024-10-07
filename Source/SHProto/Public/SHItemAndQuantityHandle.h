#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SHItemAndQuantityHandle.generated.h"

USTRUCT(BlueprintType)
struct FSHItemAndQuantityHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle DataRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Quantity;
    
    SHPROTO_API FSHItemAndQuantityHandle();
};


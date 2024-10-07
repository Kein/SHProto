#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SHItemUseableDataStruct.generated.h"

class USHItemUseExecutive;

USTRUCT(BlueprintType)
struct FSHItemUseableDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<USHItemUseExecutive> ExecutiveClass;
    
    SHPROTO_API FSHItemUseableDataStruct();
};


#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SHItemEquipmentDataStruct.generated.h"

class ASHItemEquipment;

USTRUCT(BlueprintType)
struct FSHItemEquipmentDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHItemEquipment> EquipmentClass;
    
    SHPROTO_API FSHItemEquipmentDataStruct();
};


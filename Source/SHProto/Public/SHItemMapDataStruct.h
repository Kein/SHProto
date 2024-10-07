#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESHMapsEnum.h"
#include "ESHMapsFamily.h"
#include "SHItemMapDataStruct.generated.h"

class USHGameplayMapBaseWidget;

USTRUCT(BlueprintType)
struct FSHItemMapDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHMapsEnum AssignedMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHMapsFamily MapsFamily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MapsFamilyOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<USHGameplayMapBaseWidget> AssignedWidget;
    
    SHPROTO_API FSHItemMapDataStruct();
};


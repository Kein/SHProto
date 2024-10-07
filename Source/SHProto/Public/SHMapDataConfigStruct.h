#pragma once
#include "CoreMinimal.h"
#include "ESHMapsEnum.h"
#include "SHMapDataConfigStruct.generated.h"

USTRUCT(BlueprintType)
struct FSHMapDataConfigStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHMapsEnum Map;
    
    SHPROTO_API FSHMapDataConfigStruct();
};


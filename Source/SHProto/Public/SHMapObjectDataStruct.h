#pragma once
#include "CoreMinimal.h"
#include "ESHMapObjectTypeEnum.h"
#include "ESHMapsEnum.h"
#include "SHMapObjectDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FSHMapObjectDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName ObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ESHMapsEnum Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    ESHMapObjectTypeEnum Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    int32 Value;
    
    SHPROTO_API FSHMapObjectDataStruct();
};


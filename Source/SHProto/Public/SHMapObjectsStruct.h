#pragma once
#include "CoreMinimal.h"
#include "SHMapObjectDataStruct.h"
#include "SHMapObjectsStruct.generated.h"

USTRUCT(BlueprintType)
struct FSHMapObjectsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TArray<FSHMapObjectDataStruct> Objects;
    
    SHPROTO_API FSHMapObjectsStruct();
};


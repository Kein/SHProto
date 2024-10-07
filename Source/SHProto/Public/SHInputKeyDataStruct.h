#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "SHInputKeyDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FSHInputKeyDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FKey> InputKeys;
    
    SHPROTO_API FSHInputKeyDataStruct();
};


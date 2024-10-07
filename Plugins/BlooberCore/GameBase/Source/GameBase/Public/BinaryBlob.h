#pragma once
#include "CoreMinimal.h"
#include "BinaryBlob.generated.h"

USTRUCT(BlueprintType)
struct FBinaryBlob {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint8> Data;
    
    GAMEBASE_API FBinaryBlob();
};


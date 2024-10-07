#pragma once
#include "CoreMinimal.h"
#include "SHMovementDataStruct.h"
#include "SHCustomMovementStruct.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCustomMovementStruct {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Requester;
    
    UPROPERTY()
    FSHMovementDataStruct Data;
    
    FSHCustomMovementStruct();
};


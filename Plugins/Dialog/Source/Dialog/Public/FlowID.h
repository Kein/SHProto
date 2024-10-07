#pragma once
#include "CoreMinimal.h"
#include "FlowID.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FFlowID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    int32 _ObjectID;
    
    UPROPERTY(BlueprintReadWrite, SaveGame, VisibleAnywhere)
    uint8 _Type;
    
    FFlowID();
};


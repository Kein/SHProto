#pragma once
#include "CoreMinimal.h"
#include "MaterialCtrlParamForcedBounds.generated.h"

USTRUCT(BlueprintType)
struct FMaterialCtrlParamForcedBounds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SlotIndex;
    
    MATERIALSSPLINECTRL_API FMaterialCtrlParamForcedBounds();
};


#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "ToggleableInfo.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FToggleableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUE4InputHandle Handle;
    
    UPROPERTY(EditAnywhere)
    bool ToggleByDefault;
    
    FToggleableInfo();
};


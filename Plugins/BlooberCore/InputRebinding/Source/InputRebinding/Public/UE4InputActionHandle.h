#pragma once
#include "CoreMinimal.h"
#include "UE4InputActionHandle.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FUE4InputActionHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName ActionName;
    
    FUE4InputActionHandle();
};


#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "InputState.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FInputState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FUE4InputHandle> Actions;
    
    FInputState();
};


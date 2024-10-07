#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UE4KeyName.generated.h"

USTRUCT(BlueprintType)
struct INPUTREBINDING_API FUE4KeyName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText DisplayName;
    
    FUE4KeyName();
};


#pragma once
#include "CoreMinimal.h"
#include "CommandText.generated.h"

USTRUCT(BlueprintType)
struct FCommandText {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString Text;
    
    UPROPERTY(EditAnywhere)
    FString Command;
    
    UCSW_API FCommandText();
};


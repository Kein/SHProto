#pragma once
#include "CoreMinimal.h"
#include "ConsoleOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FConsoleOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Value;
    
    UPROPERTY(Transient)
    FString PreservedValue;
    
    SHPROTO_API FConsoleOverrideData();
};


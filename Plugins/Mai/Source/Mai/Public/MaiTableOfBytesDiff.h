#pragma once
#include "CoreMinimal.h"
#include "MaiTableOfBytes.h"
#include "MaiTableOfBytesDiff.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiTableOfBytesDiff {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMaiTableOfBytes _Value[10];
    
    FMaiTableOfBytesDiff();
};


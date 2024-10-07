#pragma once
#include "CoreMinimal.h"
#include "MaiTableOfBytes.generated.h"

USTRUCT()
struct MAI_API FMaiTableOfBytes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint8> _Table;
    
    FMaiTableOfBytes();
};


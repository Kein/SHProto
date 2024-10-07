#pragma once
#include "CoreMinimal.h"
#include "DaiParams.generated.h"

class UDaiParam;

USTRUCT()
struct DAI_API FDaiParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UDaiParam*> _List;
    
    FDaiParams();
};


#pragma once
#include "CoreMinimal.h"
#include "DaiNotifies.generated.h"

class UDaiNotify;

USTRUCT(BlueprintType)
struct DAI_API FDaiNotifies {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _Debug;
    
    UPROPERTY(EditAnywhere)
    bool _IgnoreFailure;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UDaiNotify*> _List;
    
    FDaiNotifies();
};


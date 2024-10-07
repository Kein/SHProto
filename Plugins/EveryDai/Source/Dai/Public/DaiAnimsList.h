#pragma once
#include "CoreMinimal.h"
#include "DaiAnimPlayParams.h"
#include "DaiAnimsList.generated.h"

USTRUCT(BlueprintType)
struct DAI_API FDaiAnimsList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FDaiAnimPlayParams> _Animations;
    
    FDaiAnimsList();
};


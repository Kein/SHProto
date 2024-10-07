#pragma once
#include "CoreMinimal.h"
#include "DaiBlockade.generated.h"

USTRUCT(BlueprintType)
struct DAI_API FDaiBlockade {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    bool _Blocked;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    TArray<FName> _Blockers;
    
    FDaiBlockade();
};


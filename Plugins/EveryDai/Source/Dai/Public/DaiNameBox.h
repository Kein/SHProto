#pragma once
#include "CoreMinimal.h"
#include "DaiNameBox.generated.h"

USTRUCT(BlueprintType)
struct DAI_API FDaiNameBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 _Index;
    
    FDaiNameBox();
};


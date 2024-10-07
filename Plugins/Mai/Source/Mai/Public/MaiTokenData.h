#pragma once
#include "CoreMinimal.h"
#include "MaiTokenData.generated.h"

USTRUCT(BlueprintType)
struct FMaiTokenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _CanBeStolen;
    
    MAI_API FMaiTokenData();
};


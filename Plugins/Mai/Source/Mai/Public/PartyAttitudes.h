#pragma once
#include "CoreMinimal.h"
#include "PartyAttitude.h"
#include "PartyAttitudes.generated.h"

USTRUCT(BlueprintType)
struct FPartyAttitudes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FPartyAttitude> _Attitudes;
    
    MAI_API FPartyAttitudes();
};


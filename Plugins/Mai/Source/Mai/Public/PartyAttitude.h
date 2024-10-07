#pragma once
#include "CoreMinimal.h"
#include "EPartyAttitude.h"
#include "PartyAttitude.generated.h"

USTRUCT()
struct FPartyAttitude {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<EPartyAttitude> _Attitudes;
    
    MAI_API FPartyAttitude();
};


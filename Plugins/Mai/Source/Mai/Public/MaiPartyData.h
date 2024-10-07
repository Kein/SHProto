#pragma once
#include "CoreMinimal.h"
#include "EPartyAttitude.h"
#include "MaiPartyData.generated.h"

USTRUCT(BlueprintType)
struct FMaiPartyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EPartyAttitude _DefaultAttitude;
    
    MAI_API FMaiPartyData();
};


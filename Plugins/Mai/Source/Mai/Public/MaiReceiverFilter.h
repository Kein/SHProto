#pragma once
#include "CoreMinimal.h"
#include "EDaiDistanceType.h"
#include "Templates/SubclassOf.h"
#include "MaiReceiverFilter.generated.h"

class APawn;

USTRUCT(BlueprintType)
struct MAI_API FMaiReceiverFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName _HasTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<APawn> _IsAClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDaiDistanceType _RangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _InRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _InAngle;
    
    FMaiReceiverFilter();
};


#pragma once
#include "CoreMinimal.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHIntCondition.h"
#include "SHIntEndingFactor.generated.h"

UCLASS(Abstract, BlueprintType)
class SHPROTO_API USHIntEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FSHIntCondition, FSHEndingScoreChanger> ConditionToScoreChangeMap;
    
protected:
    UPROPERTY(SaveGame)
    int32 Value;
    
public:
    USHIntEndingFactor();

};


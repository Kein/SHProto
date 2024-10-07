#pragma once
#include "CoreMinimal.h"
#include "ESHBoolEndingFactorValues.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHBoolEndingFactor.generated.h"

UCLASS(Abstract, BlueprintType)
class SHPROTO_API USHBoolEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHBoolEndingFactorValues, FSHEndingScoreChanger> ValueToScoreChangeMap;
    
    UPROPERTY(SaveGame)
    bool Value;
    
public:
    USHBoolEndingFactor();

};


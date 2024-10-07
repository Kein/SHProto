#pragma once
#include "CoreMinimal.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHFloatCondition.h"
#include "SHFloatEndingFactor.generated.h"

UCLASS(Abstract, BlueprintType)
class SHPROTO_API USHFloatEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FSHFloatCondition, FSHEndingScoreChanger> ConditionToScoreChangeMap;
    
protected:
    UPROPERTY(SaveGame)
    float Value;
    
public:
    USHFloatEndingFactor();

};


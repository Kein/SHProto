#pragma once
#include "CoreMinimal.h"
#include "ESHWoodsideCoinPuzzleEndingFactorValue.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHWoodsideCoinPuzzleEndingFactor.generated.h"

UCLASS(BlueprintType, CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHWoodsideCoinPuzzleEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHWoodsideCoinPuzzleEndingFactorValue, FSHEndingScoreChanger> ValueToScoreChangeMap;
    
    UPROPERTY(SaveGame)
    ESHWoodsideCoinPuzzleEndingFactorValue Value;
    
public:
    USHWoodsideCoinPuzzleEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_WoodsideCoinPuzzle_SetDebugValue(int32 InValue);
    
};


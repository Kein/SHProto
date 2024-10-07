#pragma once
#include "CoreMinimal.h"
#include "ESHHotelFWPyramidHeadBossAftermathEndingFactorValue.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHHotelFWPyramidHeadBossAftermathEndingFactor.generated.h"

UCLASS(BlueprintType, CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHHotelFWPyramidHeadBossAftermathEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHHotelFWPyramidHeadBossAftermathEndingFactorValue, FSHEndingScoreChanger> ValueToScoreChangeMap;
    
    UPROPERTY(SaveGame)
    ESHHotelFWPyramidHeadBossAftermathEndingFactorValue Value;
    
public:
    USHHotelFWPyramidHeadBossAftermathEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_HotelFWPyramidHeadBossAftermath_SetDebugValue(int32 InValue);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ESHPyramidHeadBossFightOutcomeEndingFactorValue.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHPyramidHeadBossFightOutcomeEndingFactor.generated.h"

UCLASS(BlueprintType, CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPyramidHeadBossFightOutcomeEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHPyramidHeadBossFightOutcomeEndingFactorValue, FSHEndingScoreChanger> ValueToScoreChangeMap;
    
    UPROPERTY(SaveGame)
    ESHPyramidHeadBossFightOutcomeEndingFactorValue Value;
    
public:
    USHPyramidHeadBossFightOutcomeEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_PyramidHeadBossFightOutcome_SetDebugValue(int32 InValue);
    
};


#pragma once
#include "CoreMinimal.h"
#include "ESHPrisonGallowPuzzleEndingFactorValue.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHPrisonGallowPuzzleEndingFactor.generated.h"

UCLASS(BlueprintType, CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHPrisonGallowPuzzleEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHPrisonGallowPuzzleEndingFactorValue, FSHEndingScoreChanger> ValueToScoreChangeMap;
    
    UPROPERTY(SaveGame)
    ESHPrisonGallowPuzzleEndingFactorValue Value;
    
public:
    USHPrisonGallowPuzzleEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_PrisonGallowPuzzle_SetDebugValue(int32 InValue);
    
};


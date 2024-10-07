#pragma once
#include "CoreMinimal.h"
#include "ESHHotelOWMirrorPuzzleEndingFactorValue.h"
#include "SHEndingFactor.h"
#include "SHEndingScoreChanger.h"
#include "SHHotelOWMirrorPuzzleEndingFactor.generated.h"

UCLASS(BlueprintType, CollapseCategories, DefaultToInstanced, EditInlineNew)
class SHPROTO_API USHHotelOWMirrorPuzzleEndingFactor : public USHEndingFactor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<ESHHotelOWMirrorPuzzleEndingFactorValue, FSHEndingScoreChanger> ValueToScoreChangeMap;
    
    UPROPERTY(SaveGame)
    ESHHotelOWMirrorPuzzleEndingFactorValue Value;
    
public:
    USHHotelOWMirrorPuzzleEndingFactor();

    UFUNCTION(Exec)
    void SHDebug_Character_Endings_Factors_HotelOWMirrorPuzzle_SetDebugValue(int32 InValue);
    
};


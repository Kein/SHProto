#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHEndingType.h"
#include "ESHHotelFWPyramidHeadBossAftermathEndingFactorValue.h"
#include "ESHHotelOWMirrorPuzzleEndingFactorValue.h"
#include "ESHPrisonGallowPuzzleEndingFactorValue.h"
#include "ESHPyramidHeadBossFightOutcomeEndingFactorValue.h"
#include "ESHWoodsideCoinPuzzleEndingFactorValue.h"
#include "SHEndingFactorsStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class SHPROTO_API USHEndingFactorsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHEndingFactorsStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWoodsideCoinPuzzleEndingFactor(UObject* WorldContextObject, ESHWoodsideCoinPuzzleEndingFactorValue InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWestCityFWMariaInteractionsEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWestCityFWInteractedAllAtHeavensNightEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPyramidHeadBossFightOutcomeEndingFactor(UObject* WorldContextObject, ESHPyramidHeadBossFightOutcomeEndingFactorValue InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetPrisonGallowPuzzleEndingFactor(UObject* WorldContextObject, ESHPrisonGallowPuzzleEndingFactorValue InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNeelysBarMessageEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLabyrinthMariaRoomsEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHotelOWMirrorPuzzleEndingFactor(UObject* WorldContextObject, ESHHotelOWMirrorPuzzleEndingFactorValue InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHotelFWPyramidHeadBossAftermathEndingFactorValue(UObject* WorldContextObject, ESHHotelFWPyramidHeadBossAftermathEndingFactorValue InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHotelFWListenedSickbedConversationEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHotelFWKilledAllDefenselessEnemiesEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetHospitalFWLyingMariaInteractionsEndingFactor(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ESHEndingType GetCurrentEndingType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanPlayUFOEnding(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanPlayBlissEnding(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AllowAddValueBlissEnding(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddValueWestCityFWMariaRedirectionsCommentsEndingFactor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddValueUFOEndingFactor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddValueBlissEnding(UObject* WorldContextObject);
    
};


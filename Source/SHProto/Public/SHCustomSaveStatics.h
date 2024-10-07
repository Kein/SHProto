#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHEndingType.h"
#include "SHCustomSaveStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class USHCustomSaveStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHCustomSaveStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterSeenEnding(const UObject* WorldContextObject, ESHEndingType InEndingType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewGamePlus(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSeenStillnessEnding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSeenRebirthEnding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSeenMariaEnding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSeenInWaterEnding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasSeenBlissEnding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasEverSeenLeaveEnding(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool HasEverFinishedGame(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetDeathCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FetchActorSavedPropertyBoolValue(const UObject* WorldContextObject, const FGuid& InActorGuid, FName InPropertyName, bool& OutFetchSuccess, bool& OutFoundValue);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 CountUniqueSeenEndings(const UObject* WorldContextObject);
    
};


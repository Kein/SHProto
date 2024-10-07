#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnlineUtility.generated.h"

class UObject;

UCLASS(BlueprintType)
class GAMEBASE_API UOnlineUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOnlineUtility();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSteamActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsLiveActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGogActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGDKActive(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsEOSActive(UObject* WorldContextObject);
    
};


#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "ESHMapsEnum.h"
#include "SHItemsStatics.generated.h"

class ASHFlashlight;
class ASHRadio;
class UObject;

UCLASS(BlueprintType)
class USHItemsStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHItemsStatics();

    UFUNCTION(BlueprintCallable)
    static void RequestPreloadItemInvestigationAssets(UObject* Requester, FName ItemName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestItemsSwap(UObject* WorldContextObject, FName ItemNameToRemove, FName ItemNameToAdd, bool bAddOnlyIfRemovedWithSuccess);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestCollectItemWithNotify(UObject* WorldContextObject, FName ItemDataRowName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RequestCollectAndInvestigateItem(UObject* WorldContextObject, FName ItemDataRowName);
    
    UFUNCTION(BlueprintCallable)
    static void ReleasePreloadedItemInvestigationAssets(UObject* Requester, FName ItemName);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseAssetsForItemWeapon(UObject* Requester, FName InItemWeaponName);
    
    UFUNCTION(BlueprintCallable)
    static void PreloadAssetsForItemWeapon(UObject* Requester, FName InItemWeaponName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PerformNotesScribbleMapContexted(const UObject* WorldContextObject, ESHMapsEnum InMapContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool PerformNotesScribble(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayerInventoryEmpty(UObject* WorldContextObject, TArray<FName> ItemsToIgnore);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsFlashlightInUse(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASHRadio* GetRadio(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ASHFlashlight* GetFlashlight(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DebugGiveItems(const UObject* WorldContextObject, const TArray<FDataTableRowHandle>& InItemsHandles);
    
};


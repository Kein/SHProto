#include "SHItemsStatics.h"

USHItemsStatics::USHItemsStatics() {
}

void USHItemsStatics::RequestPreloadItemInvestigationAssets(UObject* Requester, FName ItemName) {
}

bool USHItemsStatics::RequestItemsSwap(UObject* WorldContextObject, FName ItemNameToRemove, FName ItemNameToAdd, bool bAddOnlyIfRemovedWithSuccess) {
    return false;
}

bool USHItemsStatics::RequestCollectItemWithNotify(UObject* WorldContextObject, FName ItemDataRowName) {
    return false;
}

bool USHItemsStatics::RequestCollectAndInvestigateItem(UObject* WorldContextObject, FName ItemDataRowName) {
    return false;
}

void USHItemsStatics::ReleasePreloadedItemInvestigationAssets(UObject* Requester, FName ItemName) {
}

void USHItemsStatics::ReleaseAssetsForItemWeapon(UObject* Requester, FName InItemWeaponName) {
}

void USHItemsStatics::PreloadAssetsForItemWeapon(UObject* Requester, FName InItemWeaponName) {
}

bool USHItemsStatics::PerformNotesScribbleMapContexted(const UObject* WorldContextObject, ESHMapsEnum InMapContext) {
    return false;
}

bool USHItemsStatics::PerformNotesScribble(const UObject* WorldContextObject) {
    return false;
}

bool USHItemsStatics::IsPlayerInventoryEmpty(UObject* WorldContextObject, TArray<FName> ItemsToIgnore) {
    return false;
}

bool USHItemsStatics::IsFlashlightInUse(const UObject* WorldContextObject) {
    return false;
}

ASHRadio* USHItemsStatics::GetRadio(const UObject* WorldContextObject) {
    return NULL;
}

ASHFlashlight* USHItemsStatics::GetFlashlight(const UObject* WorldContextObject) {
    return NULL;
}

void USHItemsStatics::DebugGiveItems(const UObject* WorldContextObject, const TArray<FDataTableRowHandle>& InItemsHandles) {
}



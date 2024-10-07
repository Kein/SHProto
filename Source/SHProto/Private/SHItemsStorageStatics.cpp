#include "SHItemsStorageStatics.h"

USHItemsStorageStatics::USHItemsStorageStatics() {
}

bool USHItemsStorageStatics::HasPlayerCollectedItemByConfig(UObject* Context, const FSHItemsStorageConfig& ItemsStorageConfig) {
    return false;
}

bool USHItemsStorageStatics::HasItemByConfig(const TArray<FSHCollectedItemData>& InItems, const FSHItemsStorageConfig& ItemsStorageConfig) {
    return false;
}



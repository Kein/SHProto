#include "SHItemsStorageComponent.h"

USHItemsStorageComponent::USHItemsStorageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
}

void USHItemsStorageComponent::StoreSpecified(ACharacter* InteractingCharacter, const TArray<FSHCollectedItemData>& ItemsToStore) {
}

void USHItemsStorageComponent::StoreAllByConfig(ACharacter* InteractingCharacter, const FSHItemsStorageConfig& ItemsStorageConfig) {
}

void USHItemsStorageComponent::StoreAll(ACharacter* InteractingCharacter, const TArray<FName>& SkipItems, const TArray<ESHItemTypeEnum>& SkipItemsCategories) {
}

void USHItemsStorageComponent::RetrieveSpecified(ACharacter* InteractingCharacter, const TArray<FSHCollectedItemData>& ItemsToRetrieve) {
}

void USHItemsStorageComponent::RetrieveAllByConfig(ACharacter* InteractingCharacter, const FSHItemsStorageConfig& ItemsStorageConfig) {
}

void USHItemsStorageComponent::RetrieveAll(ACharacter* InteractingCharacter) {
}

bool USHItemsStorageComponent::IsStorageEmpty() const {
    return false;
}

TArray<FSHCollectedItemData> USHItemsStorageComponent::GetCurrentItems() const {
    return TArray<FSHCollectedItemData>();
}



#include "SHCharacterPlayItemsComponent.h"

USHCharacterPlayItemsComponent::USHCharacterPlayItemsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    this->DefaultItemClass = NULL;
    this->NotesExecutiveClass = NULL;
    this->ItemInvestigationExeClass = NULL;
    this->ReadableItemInvestigationExeClass = NULL;
    this->MapItemInvestigationExeClass = NULL;
    this->OwnerCharacter = NULL;
    this->ItemUseExe = NULL;
    this->ItemExecutive = NULL;
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_ValuesDebug() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_UnlimitedAmmo() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_RemoveAllItems() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_PerformNotesScribble() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllWeapons() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllReflections() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllMaps() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllItems() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllEquipment() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllConsumables() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_GiveAllCombineables() {
}

void USHCharacterPlayItemsComponent::SHDebug_Character_Items_Give(const FString& ItemRowName) {
}

void USHCharacterPlayItemsComponent::SetUseItemBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayItemsComponent::SetInvestigateItemBlocked(const bool Blocked, const UObject* Object) {
}

void USHCharacterPlayItemsComponent::RemoveItem(const FName ItemDataRowName, const int32 ItemQuantity, const bool RemoveNewItemFlag) {
}

void USHCharacterPlayItemsComponent::ProcessOwnerReceivedDamage(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHCharacterPlayItemsComponent::ProcessOwnerCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp) {
}

void USHCharacterPlayItemsComponent::OverrideFlashlightPocketState(bool InShouldBeOpened, const UObject* Object) {
}

bool USHCharacterPlayItemsComponent::IsUseItemBlocked() const {
    return false;
}

bool USHCharacterPlayItemsComponent::IsInvestigateItemBlocked() const {
    return false;
}

bool USHCharacterPlayItemsComponent::InvestigateCollectedItemRequest(const FName& InItemDataRowName) {
    return false;
}

bool USHCharacterPlayItemsComponent::HasItem(const FName ItemDataRowName) const {
    return false;
}

ASHItemExecutiveBase* USHCharacterPlayItemsComponent::GetItemExecutive() {
    return NULL;
}

int32 USHCharacterPlayItemsComponent::GetItemCount(const FName ItemDataRowName) const {
    return 0;
}

void USHCharacterPlayItemsComponent::CollectItem(const FName ItemDataRowName, int32 ItemQuantity, const bool AddNewItemFlag) {
}



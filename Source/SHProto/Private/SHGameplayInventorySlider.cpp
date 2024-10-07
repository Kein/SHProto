#include "SHGameplayInventorySlider.h"

USHGameplayInventorySlider::USHGameplayInventorySlider() : UUserWidget(FObjectInitializer::Get()) {
    this->bAllowLoopItems = true;
    this->bShowNewCollectedItemIndicator = true;
    this->DebugTexture = NULL;
    this->AudioEvent_MoveItem = NULL;
    this->AudioEvent_StopItem = NULL;
    this->NoItemsNameWidget = NULL;
    this->ItemNameWidget = NULL;
    this->ItemNewIndicatorImage = NULL;
    this->ItemDescriptionWidget = NULL;
    this->PreviewCenterItem = NULL;
    this->PreviewLeftItem_01 = NULL;
    this->PreviewLeftItem_02 = NULL;
    this->PreviewLeftItem_03 = NULL;
    this->PreviewRightItem_01 = NULL;
    this->PreviewRightItem_02 = NULL;
    this->PreviewRightItem_03 = NULL;
    this->PreviewRightItem_04 = NULL;
    this->PreviewRightItem_05 = NULL;
    this->PreviewRightItem_06 = NULL;
    this->MoveItemLeftAnim = NULL;
    this->MoveItemRightAnim = NULL;
    this->StopItemLeftAnim = NULL;
    this->StopItemRightAnim = NULL;
    this->ShowItemsAnim = NULL;
    this->HideItemsAnim = NULL;
    this->OwnerCharacter = NULL;
    this->CurrentPlayingAnimation = NULL;
}

void USHGameplayInventorySlider::RefreshItemsZOrder() {
}

void USHGameplayInventorySlider::RefreshItemNameAndDescription() {
}

void USHGameplayInventorySlider::ProcessAnimationFinishedEvent() {
}



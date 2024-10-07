#include "SHMiniInventoryWidget.h"

USHMiniInventoryWidget::USHMiniInventoryWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bAllowLoopItems = true;
    this->InputThrottleAcceleration = 1.00f;
    this->DebugTexture = NULL;
    this->InvBackground = NULL;
    this->PreviewsContainerCanvas = NULL;
    this->ItemNameWidget = NULL;
    this->PreviewCenterItem = NULL;
    this->PreviewUpItem_01 = NULL;
    this->PreviewUpItem_02 = NULL;
    this->PreviewUpItem_03 = NULL;
    this->PreviewUpItem_04 = NULL;
    this->PreviewDownItem_01 = NULL;
    this->PreviewDownItem_02 = NULL;
    this->PreviewDownItem_03 = NULL;
    this->PreviewDownItem_04 = NULL;
    this->MoveItemUpAnim = NULL;
    this->MoveItemDownAnim = NULL;
    this->FadeInAnim = NULL;
    this->FadeOutAnim = NULL;
    this->WrongItemAnim = NULL;
    this->AudioEvent_OpenMiniInventory = NULL;
    this->AudioEvent_CloseMiniInventory = NULL;
    this->AudioEvent_MoveItem = NULL;
    this->AudioEvent_UseCorrectItem = NULL;
    this->AudioEvent_UseIncorrectItem = NULL;
    this->OwnerCharacter = NULL;
    this->OwnerWidget = NULL;
    this->CurrentPlayingAnimation = NULL;
}

void USHMiniInventoryWidget::OnItemMoveZOrderUpdate() {
}

void USHMiniInventoryWidget::OnItemMoveNameAndDescriptionUpdate() {
}

void USHMiniInventoryWidget::OnAnimFinished() {
}



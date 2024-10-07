#include "SHGMSectionInventoryWidget.h"

USHGMSectionInventoryWidget::USHGMSectionInventoryWidget() {
    this->GameplayInventorySliderWidget = NULL;
    this->bAllowLoopCategories = true;
    this->InputThrottleAcceleration = 1.00f;
    this->ShowItemsWaitTime = 0.60f;
    this->CategoryWidgetSubclass = NULL;
    this->SubcategoryWidgetSubclass = NULL;
    this->AudioEvent_OpenInventory = NULL;
    this->AudioEvent_CloseInventory = NULL;
    this->AudioEvent_MoveCategory = NULL;
    this->AudioEvent_OpenTranscription = NULL;
    this->AudioEvent_CloseTransription = NULL;
    this->AudioEvent_NotUsableItem = NULL;
    this->Border = NULL;
    this->RetainerBox = NULL;
    this->CategoriesContainerScrollBox = NULL;
    this->CombineIndicatorContainer = NULL;
}



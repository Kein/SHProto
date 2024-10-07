#include "SHGameplaySectionCombineWidget.h"

USHGameplaySectionCombineWidget::USHGameplaySectionCombineWidget() {
    this->GameplayInventorySliderWidget = NULL;
    this->CombineBox = NULL;
    this->RequiredItemWidgetSubclass = NULL;
    this->ConnectorWidgetSubclass = NULL;
    this->AudioEvent_CombineCorrectItem = NULL;
    this->AudioEvent_RemoveLast = NULL;
    this->AudioEvent_CombineFail = NULL;
    this->AudioEvent_CombineSuccess = NULL;
}



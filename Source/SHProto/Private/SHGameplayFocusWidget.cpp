#include "SHGameplayFocusWidget.h"

USHGameplayFocusWidget::USHGameplayFocusWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MiniInventoryWidget = NULL;
    this->InputKeysDataAsset = NULL;
    this->OwnerCharacter = NULL;
}



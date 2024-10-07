#include "SHGameplayRadioIndicatorWidget.h"

USHGameplayRadioIndicatorWidget::USHGameplayRadioIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->BackgroundImage = NULL;
    this->NoiseImage = NULL;
    this->MaterialPropertyControlSettings = NULL;
}

void USHGameplayRadioIndicatorWidget::ProcessOwnerCharacterItemCollectedEvent(USHCharacterPlayItemsComponent* ComponentPtr, FName ItemContext) {
}



#include "SHGameplayHealthIndicatorWidget.h"

USHGameplayHealthIndicatorWidget::USHGameplayHealthIndicatorWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainContainer = NULL;
    this->IndicatorImage = NULL;
    this->IndicatorVisibility_MinimumHealthState = ESHHealthStateEnum::Criticalnjury;
    this->OwnerCharacterPlay = NULL;
}



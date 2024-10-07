#include "SHGameplayTutorialWidget.h"

USHGameplayTutorialWidget::USHGameplayTutorialWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TutorialRichText = NULL;
    this->MainContainer = NULL;
    this->ShowAnim = NULL;
    this->HideAnim = NULL;
    this->MinimumDisplayTime = 1.00f;
    this->GameTextsConfig = NULL;
    this->ShowAudioEvent = NULL;
}



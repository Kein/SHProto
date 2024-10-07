#include "SHGameplayReadingWidget.h"

USHGameplayReadingWidget::USHGameplayReadingWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainCanvas = NULL;
    this->TextScroller = NULL;
    this->MainTextBlock = NULL;
    this->FadeIn = NULL;
    this->FadeOut = NULL;
    this->GameTextsConfig = NULL;
    this->bInheritTextColor = false;
    this->SingleScrollValue = 10.00f;
    this->ContinousScrollValue = 5.00f;
    this->OwnerCharacter = NULL;
}





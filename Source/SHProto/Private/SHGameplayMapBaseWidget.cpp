#include "SHGameplayMapBaseWidget.h"

USHGameplayMapBaseWidget::USHGameplayMapBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ObjectsContainer = NULL;
    this->FogRevealObjectsContainer = NULL;
    this->PlayerPointer = NULL;
    this->Anchor1 = NULL;
    this->Anchor2 = NULL;
    this->FontToLocalize = NULL;
    this->MapRotation = 0.00f;
    this->OwnerCharacter = NULL;
    this->LocalizedFont = NULL;
}






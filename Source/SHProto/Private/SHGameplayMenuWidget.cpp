#include "SHGameplayMenuWidget.h"

USHGameplayMenuWidget::USHGameplayMenuWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->MainCanvas = NULL;
    this->SectionSwitcher = NULL;
    this->EmptySection = NULL;
    this->InventoryWidget = NULL;
    this->CombineWidget = NULL;
    this->SectionFadeIn = NULL;
    this->SectionFadeOut = NULL;
    this->NonInventoryAudioModEvent = NULL;
    this->InventorySectionState_On = NULL;
    this->InventorySectionState_Off = NULL;
    this->OwnerCharacter = NULL;
    this->CurrentCastedWidget = NULL;
}



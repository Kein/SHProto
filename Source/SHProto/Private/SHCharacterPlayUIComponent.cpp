#include "SHCharacterPlayUIComponent.h"

USHCharacterPlayUIComponent::USHCharacterPlayUIComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameplayGameOverWidgetClass = NULL;
    this->GameplayEndGameWidgetClass = NULL;
    this->GameplayHudWidgetClass = NULL;
    this->GameplayMenuWidgetClass = NULL;
    this->GameplayFocusWidgetClass = NULL;
    this->GameplayReadingWidgetClass = NULL;
    this->GameplaySaveMenuWidgetClass = NULL;
    this->GameplayItemInvestigationWidgetClass = NULL;
    this->ControlTipsPanelClass = NULL;
    this->SkipWidgetClass = NULL;
    this->DeveloperToolWidgetClass = NULL;
    this->GameplayHudWidget = NULL;
    this->GameplayMenuWidget = NULL;
    this->GameplayFocusWidget = NULL;
    this->GameplayReadingWidget = NULL;
    this->GameplayGameOverWidget = NULL;
    this->GameplayEndGameWidget = NULL;
    this->GameplaySaveMenuWidget = NULL;
    this->GameplayItemInvestigationWidget = NULL;
    this->ControlTipsPanel = NULL;
    this->SkipWidget = NULL;
    this->DeveloperToolWidget = NULL;
}

void USHCharacterPlayUIComponent::SHDebug_Tool_Show() {
}

void USHCharacterPlayUIComponent::SHDebug_Tool_Hide() {
}

USHGameplayHudWidget* USHCharacterPlayUIComponent::GetGameplayHudWidgetPointer() const {
    return NULL;
}



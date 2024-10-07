#include "SHInteractionIconWidget.h"

USHInteractionIconWidget::USHInteractionIconWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Root_wdg = NULL;
    this->MainImage = NULL;
    this->ActionTip_wdg = NULL;
    this->DefaultMaterial = NULL;
    this->TraversalMaterial = NULL;
    this->DefaultMaterialWithActionKey = NULL;
    this->TraversalMaterialWithActionKey = NULL;
    this->PhaseName = TEXT("Phase");
    this->FocusedMaterialControlPhaseChangeSpeed = 1.00f;
    this->FocusedMaterialControlTargetPhase = 1.00f;
}



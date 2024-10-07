#include "MaiMasterLODComponent.h"

UMaiMasterLODComponent::UMaiMasterLODComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->_SlaveComponent = NULL;
}

void UMaiMasterLODComponent::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void UMaiMasterLODComponent::ForceLOD0(bool Force) {
}



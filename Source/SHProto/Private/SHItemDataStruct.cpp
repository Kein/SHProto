#include "SHItemDataStruct.h"

FSHItemDataStruct::FSHItemDataStruct() {
    this->Type = ESHItemTypeEnum::None;
    this->GameplaySection = ESHGameplaySection::None;
    this->IsCollectable = false;
    this->IsStackable = false;
    this->BlockInventoryInvestigation = false;
    this->MeshWorldScale = 0.00f;
    this->bOverrideMeshInInvestigation = false;
    this->InvestigationMeshWorldScale = 0.00f;
    this->InvestigationType = EItemInvestigationType::InputRotation;
    this->RotationSpeedKeys = 0.00f;
    this->RotationSpeedMouse = 0.00f;
    this->IsReadable = false;
    this->bUseDefaultTranscriptDataIfNoContextValid = false;
    this->DefaultMeshBoundsScale = 0.00f;
    this->InvestigationMeshBoundsScale = 0.00f;
}


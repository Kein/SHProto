#include "CutscenePlayerSettings.h"

UCutscenePlayerSettings::UCutscenePlayerSettings() {
    this->CharacterCutsceneSlotName = TEXT("CutsceneSlot");
    this->CharacterCutsceneFaceSlotName = TEXT("CutsceneFaceSlot");
    this->CutsceneCharacterAnimGraphTag = TEXT("CutsceneCharacterAnimInst");
    this->CharacterMainMeshTag = TEXT("CharacterMainMesh");
    this->CharacterCutsceneBlendInTime = 0.00f;
    this->CharacterCutsceneBlendOutTime = 0.50f;
}



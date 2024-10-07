#include "CutsceneCharacterAnimInstance.h"

UCutsceneCharacterAnimInstance::UCutsceneCharacterAnimInstance() {
    this->CutsceneFaceSlotName = TEXT("CutsceneFaceSlot");
    this->IgnoreInputPose = false;
    this->CutsceneAlpha = 0.00f;
}

bool UCutsceneCharacterAnimInstance::IsPlayingAnySlotAnimation(FName SlotName) const {
    return false;
}

float UCutsceneCharacterAnimInstance::CalculateFaceSlotAlpha() const {
    return 0.0f;
}



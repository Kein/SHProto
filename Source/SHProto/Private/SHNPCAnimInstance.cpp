#include "SHNPCAnimInstance.h"
#include "SHNPCAnimInstanceStateData.h"
#include "Templates/SubclassOf.h"

USHNPCAnimInstance::USHNPCAnimInstance() {
    this->AnimInstanceStateDataClass = USHNPCAnimInstanceStateData::StaticClass();
    this->bDrawAnimInstanceDebug = false;
    this->bRagdollDeathEnable = false;
    this->AdditionalTranslationAlpha = 0.00f;
    this->p_AnimInstanceStateData = NULL;
}

UAnimInstance* USHNPCAnimInstance::SetNewLocomotionAnimInstance(TSubclassOf<USHNPCLocomotionAnimInstance> NewLocomotionInstance, bool ForceReplacement, float TransitionDuration, float TransitionDelay, int32 SlotIndex) {
    return NULL;
}


void USHNPCAnimInstance::OnRevive() {
}




void USHNPCAnimInstance::OnDeath() {
}

void USHNPCAnimInstance::MoveEndBegin() {
}


FName USHNPCAnimInstance::GetLocomotionTag(int32 SlotIndex) const {
    return NAME_None;
}

float USHNPCAnimInstance::GetLocomotionChangeAlpha(int32 SlotIndex) const {
    return 0.0f;
}

USHNPCLocomotionAnimInstance* USHNPCAnimInstance::GetLocomotionAnimInstance(int32 SlotIndex) const {
    return NULL;
}

FName USHNPCAnimInstance::GetChangeLocomotionSnapshotName(int32 SlotIndex) const {
    return NAME_None;
}

USHAnimComponent* USHNPCAnimInstance::GetAnimComponent() const {
    return NULL;
}



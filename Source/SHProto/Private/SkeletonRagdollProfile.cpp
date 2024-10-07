#include "SkeletonRagdollProfile.h"

USkeletonRagdollProfile::USkeletonRagdollProfile() {
    this->bIsActive = false;
    this->bIsPaused = false;
    this->Blend = 0.00f;
    this->TimeFromStart = 0.00f;
    this->BonesNum = 0;
    this->TimeScale = 1.00f;
    this->TimeOfBlend = 0.00f;
}



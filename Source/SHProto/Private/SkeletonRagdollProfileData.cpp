#include "SkeletonRagdollProfileData.h"

FSkeletonRagdollProfileData::FSkeletonRagdollProfileData() {
    this->Name = ERagdollProfileName::Test;
    this->BlendPhysicTarget = 0.00f;
    this->BlendPhysicInterpSpeed = 0.00f;
    this->BlendCurve = NULL;
    this->bInfinitTime = false;
    this->TimeOfBlend = 0.00f;
    this->Priority = 0.00f;
    this->bSpecificBones = false;
    this->WeightImpact = 0.00f;
    this->WeightImpactDamping = 0.00f;
    this->ParentLevelImpact = 0;
    this->ParentLevelDamping = 0.00f;
}


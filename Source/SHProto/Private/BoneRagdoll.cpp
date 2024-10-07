#include "BoneRagdoll.h"

FBoneRagdoll::FBoneRagdoll() {
    this->bone = EBones::Root;
    this->bOverrideSettings = false;
    this->BlendPhysicTargetScale = 0.00f;
}


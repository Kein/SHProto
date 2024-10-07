#include "SHHitReactionResultBonePhysics.h"

FSHHitReactionResultBonePhysics::FSHHitReactionResultBonePhysics() {
    this->ActivatePhysicsForParentBoneLevelAbove = 0;
    this->ChildBodiesForceMultiplier = 0.00f;
    this->bOnlyApplyForceToDirectChildren = false;
    this->bApplyForceAtChildLocation = false;
    this->BonePhysicsBlend = 0.00f;
    this->BonePhysicsDuration = 0.00f;
    this->BonePhysicsCurve = 0.00f;
    this->bAllowRootBonePhysics = false;
}


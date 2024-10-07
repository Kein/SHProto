#include "SHHitReactionBonePhysicsConfiguration.h"

FSHHitReactionBonePhysicsConfiguration::FSHHitReactionBonePhysicsConfiguration() {
    this->bApplyForceAtBoneLocation = false;
    this->ChildBodiesForceMultiplier = 0.00f;
    this->bOnlyApplyForceToDirectChildren = false;
    this->bApplyForceAtChildLocation = false;
    this->RandomForceDirectionOffsetAngle = 0.00f;
    this->ActivatePhysicsForParentBoneLevelAbove = 0;
    this->BonePhysicsBlend = 0.00f;
    this->BonePhysicsDuration = 0.00f;
    this->BonePhysicsCurve = 0.00f;
    this->bAllowRootBonePhysics = false;
}


#include "SHAnimNotify_EnableBonePhysics.h"

USHAnimNotify_EnableBonePhysics::USHAnimNotify_EnableBonePhysics() {
    this->ActivateParentBodyLevelsAbove = 0;
    this->AllowRootPhysics = false;
    this->ForceApplicationTarget = ESHAnimNotifyEnableBonePhysicsForceApplicationTarget::SpecifiedBone;
    this->ApplyForceToChildrenMultiplier = 0.00f;
}



#include "SHBonePhysicsControllerSettingsBodyPhysicsOverride.h"

FSHBonePhysicsControllerSettingsBodyPhysicsOverride::FSHBonePhysicsControllerSettingsBodyPhysicsOverride() {
    this->bTreatBoneAsRoot = false;
    this->AllowPhysics = ESHBonePhysicsControllerSettingsBodyPhysicsPermission::Allow;
    this->MaximumBlendWeight = 0.00f;
    this->MaximumVelocity = 0.00f;
    this->MaximumAngularVelocity = 0.00f;
    this->bApplyForceMultiplier = false;
    this->MaximumForceMultiplier = 0.00f;
}


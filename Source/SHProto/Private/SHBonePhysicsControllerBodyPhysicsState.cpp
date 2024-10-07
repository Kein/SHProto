#include "SHBonePhysicsControllerBodyPhysicsState.h"

FSHBonePhysicsControllerBodyPhysicsState::FSHBonePhysicsControllerBodyPhysicsState() {
    this->p_CurrentBlendWeight = 0.00f;
    this->p_CachedCurrentBlendWeight = 0.00f;
    this->p_bNeedsPhysicsProfileOverrideUpdate = false;
}


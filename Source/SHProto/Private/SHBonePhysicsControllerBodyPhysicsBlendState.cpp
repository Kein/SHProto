#include "SHBonePhysicsControllerBodyPhysicsBlendState.h"

FSHBonePhysicsControllerBodyPhysicsBlendState::FSHBonePhysicsControllerBodyPhysicsBlendState() {
    this->p_MaximumPhysicsBlendWeight = 0.00f;
    this->p_CurrentPhysicsBlendWeight = 0.00f;
    this->p_FadeOutTime = 0.00f;
    this->p_CurrentFadeOutProgess = 0.00f;
    this->p_FadeOutCurveBend = 0.00f;
}


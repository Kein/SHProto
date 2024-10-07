#include "SHBonePhysicsControllerSubcomponent.h"

USHBonePhysicsControllerSubcomponent::USHBonePhysicsControllerSubcomponent() {
    this->bPreventPhysicsOfRootBody = true;
    this->bNeverManagePhysicsProfiles = true;
    this->bPrintPhysicsStatesDebug = false;
    this->bDrawAppliedForcesDebug = false;
    this->DrawAppliedForcesDebugScale = 1.00f;
    this->bDrawBodyActiveForcesDebug = false;
    this->DrawBodyActiveForcesDebugScale = 1.00f;
    this->bDrawDebugPose = false;
    this->DrawStreamedPoseDebugDuration = 0.00f;
}

void USHBonePhysicsControllerSubcomponent::UnfreezeBodiesPose(float InUnfreezeDelay) {
}

void USHBonePhysicsControllerSubcomponent::SetStreamedPoseDrawingDuration(float InDuration) {
}

void USHBonePhysicsControllerSubcomponent::SetPhysicsStatesDebugPrinting(bool InEnableDebugPrint) {
}

void USHBonePhysicsControllerSubcomponent::SetDrawBodyActiveForcesDebugArrows(bool InDrawBodyActiveForcesDebug, float InBodyActiveForcesScale) {
}

void USHBonePhysicsControllerSubcomponent::SetDrawAppliedForcesDebugArrows(bool InDrawAppliedForcesDebug, float InDrawAppliedForcesScale) {
}

void USHBonePhysicsControllerSubcomponent::SetDebugSettings(bool InPrintPhysicsStates, bool InDrawAppliedForcesDebug, float InDrawAppliedForcesScale, bool InDrawBodyActiveForcesDebug, float InBodyActiveForcesScale, bool InDrawPoseDebug, float InDrawStreamedPoseDuration) {
}

void USHBonePhysicsControllerSubcomponent::SetDebugPoseDrawing(bool InDrawPose) {
}

bool USHBonePhysicsControllerSubcomponent::IsBodiesPoseFrozen(bool InIncludeUnfreezing) const {
    return false;
}

void USHBonePhysicsControllerSubcomponent::FreezeBodiesPose(bool InOnlyIfNotFrozen) {
}

bool USHBonePhysicsControllerSubcomponent::FindIfRootPhysicsSimulationIsActive() const {
    return false;
}

bool USHBonePhysicsControllerSubcomponent::FindIfBoneHasActivePhysics(FName InBoneName) const {
    return false;
}

void USHBonePhysicsControllerSubcomponent::FadeOutPhysicsByIdentifier(float InBlendOutTime, float InBlendOutCurveBend, FName InPhysicsIdentifier) {
}

void USHBonePhysicsControllerSubcomponent::FadeOutBonePhysicsByIdentifier(float InBlendOutTime, float InBlendOutCurveBend, FName InPhysicsIdentifier, FName InBoneName) {
}

void USHBonePhysicsControllerSubcomponent::FadeOutAllPhysics(float InBlendOutTime, float InBlendOutCurveBend) {
}

void USHBonePhysicsControllerSubcomponent::AssignBonePhysicsSettingsProfile(const FSHBonePhysicsControllerSettingsProfile& InSettingsProfile) {
}

bool USHBonePhysicsControllerSubcomponent::ApplyPhysicsForceToChildBodiesOfBone(FName InBoneName, const FVector& InForceLocation, const FVector& InForce, bool InOnlyDirectChildren, bool InApplyForceAtChildLocation, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier) {
    return false;
}

bool USHBonePhysicsControllerSubcomponent::ApplyPhysicsForceToBoneAndItsChildren(FName InBoneName, const FVector& InForceLocation, const FVector& InForce, float InChildrenBoneForceMultiplier, bool InOnlyApplyForceToDirectChildren, bool InApplyForceAtChildLocation, int32 InActivatePhysicsForParentBodyLevelsAbove, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier) {
    return false;
}

bool USHBonePhysicsControllerSubcomponent::ApplyPhysicsForceToBone(FName InBoneName, const FVector& InForceLocation, const FVector& InForce, int32 InActivatePhysicsForParentBodyLevelsAbove, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier) {
    return false;
}

bool USHBonePhysicsControllerSubcomponent::ActivatePhysicsForBone(FName InBoneName, int32 InActivatePhysicsForParentBodyLevelsAbove, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier) {
    return false;
}



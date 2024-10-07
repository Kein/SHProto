#include "AnimNode_SingleBranchLayeredBoneBlend.h"

FAnimNode_SingleBranchLayeredBoneBlend::FAnimNode_SingleBranchLayeredBoneBlend() {
    this->BlendWeight = 0.00f;
    this->bMeshSpaceRotationBlend = false;
    this->bMeshSpaceScaleBlend = false;
    this->CurveBlendOption = ECurveBlendOption::Override;
    this->bBlendRootMotionBasedOnRootBone = false;
    this->LODThreshold = 0;
}


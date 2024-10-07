#include "SHAnimObstacleDetectionSubcomp.h"

USHAnimObstacleDetectionSubcomp::USHAnimObstacleDetectionSubcomp() {
    this->WallHandTimeSinceLast = 0.00f;
    this->WallHandRightHandLast = false;
    this->bWallFaceSide = false;
    this->WallHandDistanceLast = 0.00f;
    this->WallHandRightAlpha = 0.00f;
    this->WallHandLeftAlpha = 0.00f;
    this->WallSpineRotationAlpha = 0.00f;
    this->WallSpineImpulseAlpha = 0.00f;
    this->WallSpineImpulseTimeMax = 0.25f;
    this->WallSpineImpulseTime = 0.00f;
    this->WallSpineRotationFromCornerAlpha = 0.00f;
    this->WallRotationFromCornerEndTimer = 0.00f;
    this->WallAvoidHandLeft = 0.00f;
    this->WallAvoidHandRight = 0.00f;
}



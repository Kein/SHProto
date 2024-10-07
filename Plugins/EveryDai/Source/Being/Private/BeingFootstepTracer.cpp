#include "BeingFootstepTracer.h"

UBeingFootstepTracer::UBeingFootstepTracer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_TraceChannel = ECC_WorldStatic;
    this->_TraceComplex = false;
    this->_TraceFindInitialOverlaps = true;
    this->_TraceIgnoreMask = 0;
    this->_TraceRadius = 0.00f;
    this->_TraceUpLength = 50.00f;
    this->_TraceDownLength = 20.00f;
    this->_FootstepClassInstance = NULL;
    this->_FootstepsTemplate = NULL;
    this->_MinStepPeriod = 0.25f;
    this->_SingleEffect = false;
    this->_IgnoreNextFalling = false;
    this->_TraceFoliage = false;
    this->_MuteFootstep = false;
    this->_TurnLoudnessMod = 0.50f;
    this->_LastFootSurface[0] = SurfaceType_Default;
    this->_LastFootSurface[1] = SurfaceType_Default;
    this->_LastFootSurface[2] = SurfaceType_Default;
    this->_LastFootSurface[3] = SurfaceType_Default;
    this->_LastFootSurface[4] = SurfaceType_Default;
    this->_MaskMaterial = NULL;
    this->_TrailsMaterial = NULL;
    this->_FootstepDrawTrails = false;
    this->_FootstepQuadSize = 30.00f;
    this->_TrailQuadSize = 25.00f;
    this->_TrailQuadWidth = 30.00f;
    this->_FootstepQuadYScale = 1.00f;
    this->_FootstepAngleOffset = 0.00f;
    this->_TrailsTiling = 100.00f;
    this->_TrailsAngleOffset = 0.00f;
    this->_FootstepCanvasDensity = 128.00f;
    this->_FootstepHeightLimit = 250.00f;
    this->_FootstepLifeTime = 60.00f;
    this->_FootstepsLimit = 128;
    this->_TrailsLimit = 192;
    this->_DrawFootstepsMask = true;
    this->_WadingSoundLoopEnabled = false;
    this->_LastWadingSurface = SurfaceType_Default;
    this->_LastWadingDepth = 0.00f;
    this->_LastWadingFootstep = NULL;
    this->_WadingParticle = NULL;
    this->_WadingParticleCaller = NULL;
    this->_WadingParticleTimer = 0.00f;
    this->_TerrainTexturesMapInitialized = false;
    this->_TerrainTexturesMap = NULL;
}

bool UBeingFootstepTracer::IsOnSurface(TEnumAsByte<EPhysicalSurface> Surface) const {
    return false;
}

TEnumAsByte<EPhysicalSurface> UBeingFootstepTracer::GetWadingSurface() const {
    return SurfaceType_Default;
}

float UBeingFootstepTracer::GetWadingDepth() const {
    return 0.0f;
}



#include "SHPostprocessDOFOverride.h"

FSHPostprocessDOFOverride::FSHPostprocessDOFOverride() {
    this->bOverride_DepthOfFieldSensorWidth = false;
    this->bOverride_DepthOfFieldSqueezeFactor = false;
    this->bOverride_DepthOfFieldFocalDistance = false;
    this->bOverride_DepthOfFieldAnamorphism = false;
    this->bOverride_DepthOfFieldDepthBlurAmount = false;
    this->bOverride_DepthOfFieldDepthBlurRadius = false;
    this->bOverride_DepthOfFieldVolumetricFogBias = false;
    this->bOverride_DepthOfFieldVolumetricFogScale = false;
    this->bOverride_DepthOfFieldVolumetricFogExponent = false;
    this->bOverride_DepthOfFieldFocalRegion = false;
    this->bOverride_DepthOfFieldNearTransitionRegion = false;
    this->bOverride_DepthOfFieldFarTransitionRegion = false;
    this->bOverride_DepthOfFieldScale = false;
    this->bOverride_DepthOfFieldNearBlurSize = false;
    this->bOverride_DepthOfFieldFarBlurSize = false;
    this->bOverride_DepthOfFieldOcclusion = false;
    this->bOverride_DepthOfFieldSkyFocusDistance = false;
    this->bOverride_DepthOfFieldVignetteSize = false;
    this->DepthOfFieldSensorWidth = 0.00f;
    this->DepthOfFieldSqueezeFactor = 0.00f;
    this->DepthOfFieldFocalDistance = 0.00f;
    this->DepthOfFieldAnamorphism = 0.00f;
    this->DepthOfFieldDepthBlurAmount = 0.00f;
    this->DepthOfFieldDepthBlurRadius = 0.00f;
    this->DepthOfFieldVolumetricFogBias = 0.00f;
    this->DepthOfFieldVolumetricFogScale = 0.00f;
    this->DepthOfFieldVolumetricFogExponent = 0.00f;
    this->DepthOfFieldFocalRegion = 0.00f;
    this->DepthOfFieldNearTransitionRegion = 0.00f;
    this->DepthOfFieldFarTransitionRegion = 0.00f;
    this->DepthOfFieldScale = 0.00f;
    this->DepthOfFieldNearBlurSize = 0.00f;
    this->DepthOfFieldFarBlurSize = 0.00f;
    this->DepthOfFieldOcclusion = 0.00f;
    this->DepthOfFieldSkyFocusDistance = 0.00f;
    this->DepthOfFieldVignetteSize = 0.00f;
}


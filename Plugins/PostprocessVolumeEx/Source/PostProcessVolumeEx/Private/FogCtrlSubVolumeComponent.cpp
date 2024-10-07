#include "FogCtrlSubVolumeComponent.h"

UFogCtrlSubVolumeComponent::UFogCtrlSubVolumeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverAffectNavigation = false;
    this->bVisibleInReflectionCaptures = false;
    this->bVisibleInRealTimeSkyCaptures = false;
    this->bVisibleInRayTracing = false;
    this->bOverride_ExponentialFogSettings = false;
    this->bOverride_SkyLightSettings = false;
    this->bOverride_Wind = false;
    this->bOverride_Exposure = false;
    this->bOverride_ColorGrading = false;
    this->bOverride_Film = false;
    this->bOverride_DOF = false;
    this->SphereFalloff = 0.50f;
}



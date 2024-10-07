#include "SHPostprocessAtmFog.h"

FSHPostprocessAtmFog::FSHPostprocessAtmFog() {
    this->Visible = false;
    this->BottomRadius = 0.00f;
    this->AtmosphereHeight = 0.00f;
    this->MultiScatteringFactor = 0.00f;
    this->TraceSampleCountScale = 0.00f;
    this->RayleighScatteringScale = 0.00f;
    this->RayleighExponentialDistribution = 0.00f;
    this->MieScatteringScale = 0.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.00f;
    this->MieExponentialDistribution = 0.00f;
    this->OtherAbsorptionScale = 0.00f;
    this->AerialPespectiveViewDistanceScale = 0.00f;
    this->HeightFogContribution = 0.00f;
    this->TransmittanceMinLightElevationAngle = 0.00f;
    this->AerialPerspectiveStartDepth = 0.00f;
    this->EnableVolumetricClouds = false;
    this->LayerBottomAltitude = 0.00f;
    this->LayerHeight = 0.00f;
    this->TracingStartMaxDistance = 0.00f;
    this->TracingMaxDistance = 0.00f;
    this->bUsePerSampleAtmosphericLightTransmittance = false;
    this->SkyLightCloudBottomOcclusion = 0.00f;
    this->ViewSampleCountScale = 0.00f;
    this->ReflectionViewSampleCountScale = 0.00f;
    this->ShadowViewSampleCountScale = 0.00f;
    this->ShadowReflectionViewSampleCountScale = 0.00f;
    this->ShadowTracingDistance = 0.00f;
    this->StopTracingTransmittanceThreshold = 0.00f;
}


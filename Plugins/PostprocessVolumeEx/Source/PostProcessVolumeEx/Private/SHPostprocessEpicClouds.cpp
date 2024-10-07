#include "SHPostprocessEpicClouds.h"

FSHPostprocessEpicClouds::FSHPostprocessEpicClouds() {
    this->BaseNoiseExp = 0.00f;
    this->BaseNoiseScale = 0.00f;
    this->BeerPowder = 0.00f;
    this->BeerPowderPower = 0.00f;
    this->ErosionExp = 0.00f;
    this->ErosionMax = 0.00f;
    this->ErosionMin = 0.00f;
    this->ErosionNoiseScale = 0.00f;
    this->ErosionScale = 0.00f;
    this->ErosionStrength = 0.00f;
    this->ExtinctionScale = 0.00f;
    this->MultiScatteringContribution = 0.00f;
    this->MultiScatteringEccentricity = 0.00f;
    this->MultiScatteringOcclusion = 0.00f;
    this->NoiseHeightExp = 0.00f;
    this->NoiseHeightRange = 0.00f;
    this->PhaseBlend = 0.00f;
    this->PhaseG = 0.00f;
    this->PhaseG2 = 0.00f;
    this->WeatherUVScale = 0.00f;
    this->WeatherTexture = NULL;
    this->WeatherTextureRotation = 0.00f;
    this->GradientTexture = NULL;
    this->UseCloudsGizmos = false;
}


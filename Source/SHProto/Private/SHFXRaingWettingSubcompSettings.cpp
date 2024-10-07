#include "SHFXRaingWettingSubcompSettings.h"

USHFXRaingWettingSubcompSettings::USHFXRaingWettingSubcompSettings() {
    this->EnableRainWetting = true;
    this->TotalWettingTime = 10.00f;
    this->TotalDryingTime = 60.00f;
    this->WetDryCurve = NULL;
    this->EnableRainDripping = false;
    this->RainDrippingSpawnRateParamName = TEXT("SpawnRate");
    this->RainDrippingIntensityParamName = TEXT("SpawnIntensity");
    this->RainDrippingIntensityEvaluateTime = 10.00f;
    this->StopDrippingWetDryFactor = 0.95f;
    this->RainDrippingIntensityDiminishTime = 3.00f;
    this->EnableWading = false;
    this->WadeDryingSpeed = 3.00f;
    this->WadeDryingCurveSlowdown = NULL;
    this->WadeSharpnessCurve = NULL;
    this->WadeOffsetWetCurve = NULL;
    this->WadeCurvesTimeLength = 5.00f;
}



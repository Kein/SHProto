#include "SHCharacterPlayRimLightingControlData.h"

FSHCharacterPlayRimLightingControlData::FSHCharacterPlayRimLightingControlData() {
    this->bOverride_RimLightIntensity = false;
    this->bOverride_RimLightColor = false;
    this->bOverride_RimLightETA = false;
    this->bOverride_RimLightBias = false;
    this->bOverride_RimLightAngleMin = false;
    this->bOverride_RimLightAngleMax = false;
    this->RimLightIntensity = 0.00f;
    this->RimLightETA = 0.00f;
    this->RimLightBias = 0.00f;
    this->RimLightAngleMin = 0.00f;
    this->RimLightAngleMax = 0.00f;
}


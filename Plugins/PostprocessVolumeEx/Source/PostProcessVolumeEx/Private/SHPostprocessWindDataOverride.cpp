#include "SHPostprocessWindDataOverride.h"

FSHPostprocessWindDataOverride::FSHPostprocessWindDataOverride() {
    this->bOverride_BarkWindIntensity = false;
    this->bOverride_BarkWindScale = false;
    this->bOverride_LeafsWindIntensity = false;
    this->bOverride_LeafsWindScale = false;
    this->bOverride_WindDirection = false;
    this->BarkWindIntensity = 0.00f;
    this->BarkWindIntensityCurve = NULL;
    this->BarkWindScale = 0.00f;
    this->LeafsWindIntensity = 0.00f;
    this->LeafsWindIntensityCurve = NULL;
    this->LeafsWindScale = 0.00f;
    this->WindDirection = 0.00f;
}


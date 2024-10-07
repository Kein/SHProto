#include "RaycastDetectableChannelConfig.h"

FRaycastDetectableChannelConfig::FRaycastDetectableChannelConfig() {
    this->Channel = ECC_WorldStatic;
    this->DistanceMethod = ERaycastDetectableDistanceMethod::Detector;
    this->LimitDetectionRange = false;
    this->StartEnabled = false;
    this->ReportEvenIfRegistered = false;
}


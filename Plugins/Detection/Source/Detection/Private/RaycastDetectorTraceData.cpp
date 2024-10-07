#include "RaycastDetectorTraceData.h"

FRaycastDetectorTraceData::FRaycastDetectorTraceData() {
    this->DrawDebugTrace = false;
    this->DebugLifeTime = 0.00f;
    this->DebugThickness = 0.00f;
    this->DebugSphereSize = 0.00f;
    this->DistanceMethod = ERaycastDetectorDistanceMethod::HitLocation;
    this->TraceChannel = ECC_WorldStatic;
    this->TraceComplex = false;
    this->IgnoreOwner = false;
}


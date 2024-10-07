#include "RigUnit_SphereTraceMultiByTraceChannelEx.h"

FRigUnit_SphereTraceMultiByTraceChannelEx::FRigUnit_SphereTraceMultiByTraceChannelEx() {
    this->TraceChannel = TraceTypeQuery1;
    this->TraceComplex = false;
    this->Radius = 0.00f;
    this->DrawDebug = false;
    this->bHit = false;
}


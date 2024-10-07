#include "RigUnit_SphereTraceByTraceChannelEx.h"

FRigUnit_SphereTraceByTraceChannelEx::FRigUnit_SphereTraceByTraceChannelEx() {
    this->TraceChannel = TraceTypeQuery1;
    this->TraceComplex = false;
    this->Radius = 0.00f;
    this->DrawDebug = false;
    this->bHit = false;
}


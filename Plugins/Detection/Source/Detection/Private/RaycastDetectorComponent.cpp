#include "RaycastDetectorComponent.h"

URaycastDetectorComponent::URaycastDetectorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void URaycastDetectorComponent::ProcessData(FRaycastDetectorTraceData& Data, const FVector& TraceStart, const FVector& TraceEnd) {
}

void URaycastDetectorComponent::LoseDetectedObjects(FRaycastDetectorTraceData& Data) {
}



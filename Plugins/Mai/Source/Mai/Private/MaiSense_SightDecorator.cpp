#include "MaiSense_SightDecorator.h"

UMaiSense_SightDecorator::UMaiSense_SightDecorator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UMaiSense_SightDecorator::IsInSight(AActor* Actor, UMaiSenseDebugger* debugger) const {
    return false;
}



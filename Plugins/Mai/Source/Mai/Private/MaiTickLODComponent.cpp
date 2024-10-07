#include "MaiTickLODComponent.h"

UMaiTickLODComponent::UMaiTickLODComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_TickLOD = EMaiTickLOD::TickLOD0;
}

void UMaiTickLODComponent::SetComponentMaxInterval(UActorComponent* Component, float Interval) {
}



#include "SHVehicleSpotComponent.h"

USHVehicleSpotComponent::USHVehicleSpotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanReceiveInput = false;
    this->CameraDataSet = NULL;
    this->VehicleComponent = NULL;
    this->InputReceiver = NULL;
    this->InteractingCharacter = NULL;
}

ACharacter* USHVehicleSpotComponent::GetInteractingCharacter() const {
    return NULL;
}



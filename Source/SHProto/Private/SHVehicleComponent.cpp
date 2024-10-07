#include "SHVehicleComponent.h"

USHVehicleComponent::USHVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovementProcessor = NULL;
}

void USHVehicleComponent::TeleportVehicle(const FVector InWorldLoc, const FRotator InWorldRot) {
}

void USHVehicleComponent::Initialize() {
}

void USHVehicleComponent::GetOutInstant(ACharacter* InteractingCharacter) {
}

void USHVehicleComponent::GetInInstant(ACharacter* InteractingCharacter, USHVehicleSpotComponent* PassengerSpot) {
}

void USHVehicleComponent::ClearAccumulatedMovement() {
}



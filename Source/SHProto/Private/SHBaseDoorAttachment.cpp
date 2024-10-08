#include "SHBaseDoorAttachment.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

ASHBaseDoorAttachment::ASHBaseDoorAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // this->ProximitySphere = CreateDefaultSubobject<USphereComponent>(TEXT("ProximitySphere"));
    // this->ProximitySphere->SetupAttachment(RootComponent);
    this->bShouldManageDoorDetectable = true;
    this->DoorActor = NULL;
}

void ASHBaseDoorAttachment::SetDoorActorFrozen(bool Inset) {
}

bool ASHBaseDoorAttachment::RegisterDoorActor(AActor* InActor) {
    return false;
}


void ASHBaseDoorAttachment::ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASHBaseDoorAttachment::ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult) {
}

void ASHBaseDoorAttachment::ProcessOnDoorLockStateChanged(USHDoorLockBaseComponent* DoorLockComponent) {
}



ASHCharacterPlay* ASHBaseDoorAttachment::GetProximityCharacter() const {
    return NULL;
}

FSHKeyAttachmentDataStruct ASHBaseDoorAttachment::GetKeyAttachmentData(FName KeyAttachmentName) const {
    return FSHKeyAttachmentDataStruct{};
}

void ASHBaseDoorAttachment::EnsureDoorActorClosed() {
}



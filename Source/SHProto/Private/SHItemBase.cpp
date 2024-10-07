#include "SHItemBase.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "SHItemAudioComponent.h"

ASHItemBase::ASHItemBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->AudioComponent = CreateDefaultSubobject<USHItemAudioComponent>(TEXT("AudioComponent"));
    this->InteractingCharacter = NULL;
    this->AudioComponent->SetupAttachment(RootComponent);
    this->Mesh->SetupAttachment(RootComponent);
}

bool ASHItemBase::Unequip() {
    return false;
}

void ASHItemBase::SetItemDisabled(const bool bInDisabled, const UObject* InObject) {
}

bool ASHItemBase::IsItemDisabled() const {
    return false;
}

ACharacter* ASHItemBase::GetInteractingCharacter() const {
    return NULL;
}

bool ASHItemBase::Equip(const FName SocketName, const FVector RelativeLocation, const FVector RelativeRotation) {
    return false;
}










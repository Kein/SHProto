#include "SHItemEquipable.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"

ASHItemEquipable::ASHItemEquipable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    //this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    //this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->OwnerCharacter = NULL;
    //this->Mesh->SetupAttachment(RootComponent);
}

ACharacter* ASHItemEquipable::GetOwnerCharacter() const {
    return NULL;
}

FName ASHItemEquipable::GetItemDataRowName() const {
    return NAME_None;
}





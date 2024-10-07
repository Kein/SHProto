#include "InstancedMeshExActor.h"
#include "InstancedMeshExComponent.h"

AInstancedMeshExActor::AInstancedMeshExActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UInstancedMeshExComponent>(TEXT("InstancedMeshExComponent0"));
    this->InstancedMeshExComponent = (UInstancedMeshExComponent*)RootComponent;
    this->ReloadMeshes = false;
}



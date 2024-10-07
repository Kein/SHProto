#include "SkeletalMeshExActor.h"
#include "SkeletalMeshExComponent.h"

ASkeletalMeshExActor::ASkeletalMeshExActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshExComponent>(TEXT("SkeletalMeshExComponent0"));
    this->SkeletalMeshExComponent = (USkeletalMeshExComponent*)RootComponent;
}



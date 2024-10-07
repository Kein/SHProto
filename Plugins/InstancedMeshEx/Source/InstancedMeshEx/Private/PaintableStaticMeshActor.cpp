#include "PaintableStaticMeshActor.h"
#include "PaintableStaticMeshComponent.h"

APaintableStaticMeshActor::APaintableStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPaintableStaticMeshComponent>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeInCluster = false;
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
}



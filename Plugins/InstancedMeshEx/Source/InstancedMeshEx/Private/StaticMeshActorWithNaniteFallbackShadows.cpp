#include "StaticMeshActorWithNaniteFallbackShadows.h"
#include "StaticMeshComponentWithNaniteFallbackShadows.h"

AStaticMeshActorWithNaniteFallbackShadows::AStaticMeshActorWithNaniteFallbackShadows(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponentWithNaniteFallbackShadows>(TEXT("StaticMeshComponent0"))) {
    this->bCanBeInCluster = false;
    const FProperty* p_StaticMeshComponent = GetClass()->FindPropertyByName("StaticMeshComponent");
    (*p_StaticMeshComponent->ContainerPtrToValuePtr<UStaticMeshComponent*>(this)) = (UStaticMeshComponent*)RootComponent;
}



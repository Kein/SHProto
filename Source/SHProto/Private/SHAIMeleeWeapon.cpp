#include "SHAIMeleeWeapon.h"
#include "Components/StaticMeshComponent.h"

ASHAIMeleeWeapon::ASHAIMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->EnvDamageValue = 1.00f;
    this->EnvDamageTypeClass = NULL;
    this->MeshComponent->SetupAttachment(RootComponent);
}

void ASHAIMeleeWeapon::HandleMeshComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




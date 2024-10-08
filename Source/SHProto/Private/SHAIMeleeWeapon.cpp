#include "SHAIMeleeWeapon.h"
#include "Components/StaticMeshComponent.h"

ASHAIMeleeWeapon::ASHAIMeleeWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    // this->MeshComponent->SetupAttachment(RootComponent);
    this->EnvDamageValue = 1.00f;
    this->EnvDamageTypeClass = NULL;

}

void ASHAIMeleeWeapon::HandleMeshComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}




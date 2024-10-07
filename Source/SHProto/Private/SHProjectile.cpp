#include "SHProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"

ASHProjectile::ASHProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
    this->SphereComponent = (USphereComponent*)RootComponent;
    this->ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->MaxRange = -1.00f;
    this->bAutoDestroyOnMovementStopeed = true;
    this->LifetimeAfterRangeReached = 3.00f;
}

bool ASHProjectile::WantDrawDebug() const {
    return false;
}

bool ASHProjectile::IsMaxRangeReached() const {
    return false;
}



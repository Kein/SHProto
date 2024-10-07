#include "SHEddieRangedWeapon.h"

ASHEddieRangedWeapon::ASHEddieRangedWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AmmoCount = 0;
    this->MaxAmmoClip = 0;
    this->ReloadAmount = 0;
    this->Range = 0.00f;
    this->CollisionRadius = 1.00f;
    this->UseCharacterMesh = false;
    this->DebugTrace = false;
    this->InfiniteAmmo = false;
}

void ASHEddieRangedWeapon::Reload() {
}



bool ASHEddieRangedWeapon::Fire(FHitResult& FoundHit, AActor* Parent) {
    return false;
}



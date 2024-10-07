#include "SHPukeProjectile.h"

ASHPukeProjectile::ASHPukeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PukePuddleFXData = NULL;
    this->DecalOrderId = 9;
    this->_PuddleSizeModifier = 1.00f;
    this->_PuddleMinSizeActivation = 10.00f;
    this->Damage = 0.00f;
    this->DamageType = NULL;
}



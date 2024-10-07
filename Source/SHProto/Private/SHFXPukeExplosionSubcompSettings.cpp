#include "SHFXPukeExplosionSubcompSettings.h"

USHFXPukeExplosionSubcompSettings::USHFXPukeExplosionSubcompSettings() {
    this->PukePuddleFXData = NULL;
    this->PukePuddleDelaySpawn = 1.10f;
    this->PukeExplosionRadius = 20.00f;
    this->PukeExplosionDamageDelay = 0.50f;
    this->PukeExplosionDamageType = NULL;
    this->PukeExplosionParticles = NULL;
    this->PukeExplosionSocket = TEXT("PukeSocket_Center");
}



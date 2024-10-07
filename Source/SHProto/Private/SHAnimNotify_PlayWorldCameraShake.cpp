#include "SHAnimNotify_PlayWorldCameraShake.h"

USHAnimNotify_PlayWorldCameraShake::USHAnimNotify_PlayWorldCameraShake() {
    this->Shake = NULL;
    this->InnerRadius = 5000.00f;
    this->OuterRadius = 5000.00f;
    this->Falloff = 1.00f;
    this->bOrientShakeTowardsEpicenter = false;
}



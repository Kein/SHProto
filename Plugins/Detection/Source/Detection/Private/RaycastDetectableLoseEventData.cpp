#include "RaycastDetectableLoseEventData.h"

FRaycastDetectableLoseEventData::FRaycastDetectableLoseEventData() {
    this->Detectable = NULL;
    this->Detector = NULL;
    this->CollisionChannel = ECC_WorldStatic;
}


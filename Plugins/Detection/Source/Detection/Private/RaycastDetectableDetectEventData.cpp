#include "RaycastDetectableDetectEventData.h"

FRaycastDetectableDetectEventData::FRaycastDetectableDetectEventData() {
    this->Detectable = NULL;
    this->Detector = NULL;
    this->CollisionChannel = ECC_WorldStatic;
    this->AlreadyRegistered = false;
}


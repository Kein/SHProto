#include "MaiSpawnedActor.h"

FMaiSpawnedActor::FMaiSpawnedActor() {
    this->_IsHidden = false;
    this->_OnPersisent = false;
    this->_ResetTransform = false;
    this->_HasFloor = false;
    this->_Restoring = false;
    this->_OriginCache = NULL;
}


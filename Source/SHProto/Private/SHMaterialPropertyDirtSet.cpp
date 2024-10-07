#include "SHMaterialPropertyDirtSet.h"

FSHMaterialPropertyDirtSet::FSHMaterialPropertyDirtSet() {
    this->CurrentDirtState = ESHFXDirtState::Clean;
    this->MaterialDynamic = NULL;
}


#include "SHMaterialPropertyControlData.h"

FSHMaterialPropertyControlData::FSHMaterialPropertyControlData() {
    this->bIsLayerParameter = false;
    this->Association = LayerParameter;
    this->LayerIndex = 0;
    this->ContextValueType = 0;
    this->ChangeSpeed = 0.00f;
    this->Type = ESHMaterialPropertyControlType::ScalarValueDriven;
}


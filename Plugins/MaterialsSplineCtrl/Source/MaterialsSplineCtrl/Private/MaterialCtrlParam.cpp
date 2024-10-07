#include "MaterialCtrlParam.h"

FMaterialCtrlParam::FMaterialCtrlParam() {
    this->PType = 0;
    this->Curve = NULL;
    this->UseGizmoField = false;
    this->GizmoCoordsTransfer = EGizmoParameterTransfer::GPS_Sphere;
    this->LoopsAround = false;
    this->SpeedScale = 0.00f;
    this->ValueScale = 0.00f;
}


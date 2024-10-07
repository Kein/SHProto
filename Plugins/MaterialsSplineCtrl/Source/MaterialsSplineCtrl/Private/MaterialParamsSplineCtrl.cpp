#include "MaterialParamsSplineCtrl.h"

UMaterialParamsSplineCtrl::UMaterialParamsSplineCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PreviousMaterial = NULL;
    this->Material = NULL;
    this->DynamicMaterial = NULL;
    this->TimeScale = 1.00f;
    this->TargetBoundsScale = 0.00f;
    this->DynamicChangesCheck = false;
}

void UMaterialParamsSplineCtrl::SetParamValueScaleByName(FName Name, float Value) {
}

void UMaterialParamsSplineCtrl::SetParamSpeedScaleByName(FName Name, float Value) {
}

void UMaterialParamsSplineCtrl::SetParamLoopAroundByName(FName Name, bool State) {
}

void UMaterialParamsSplineCtrl::SetParamCurveByName(FName Name, UCurveBase* PCurve) {
}

void UMaterialParamsSplineCtrl::ResetTime() {
}



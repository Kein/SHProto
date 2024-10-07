#include "MaterialParamsSplineCtrlEx.h"

UMaterialParamsSplineCtrlEx::UMaterialParamsSplineCtrlEx(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TimeScale = 1.00f;
    this->DynamicChangesCheck = false;
}

void UMaterialParamsSplineCtrlEx::SetParamValueScaleByName(FName Name, float Value) {
}

void UMaterialParamsSplineCtrlEx::SetParamSpeedScaleByName(FName Name, float Value) {
}

void UMaterialParamsSplineCtrlEx::SetParamLoopAroundByName(FName Name, bool State) {
}

void UMaterialParamsSplineCtrlEx::SetParamCurveByName(FName Name, UCurveBase* PCurve) {
}

void UMaterialParamsSplineCtrlEx::ResetTime() {
}

void UMaterialParamsSplineCtrlEx::ForceBindingsUpdate() {
}



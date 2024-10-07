#include "SHFXDirtLayerSubcomp.h"

USHFXDirtLayerSubcomp::USHFXDirtLayerSubcomp() {
    this->_DirtBlendLayerValue = 0.00f;
}

bool USHFXDirtLayerSubcomp::SetDirtState(int32 DirtSetIndex, ESHFXDirtState InDirtState) {
    return false;
}

void USHFXDirtLayerSubcomp::SetDirtBlendLayerValue(float InDirtValue) {
}

bool USHFXDirtLayerSubcomp::PreloadDirtState(int32 DirtSetIndex, ESHFXDirtState InDirtState) {
    return false;
}

void USHFXDirtLayerSubcomp::GetDirtStateMaterialStats(int32 DirtSetIndex, int32& OutOverridedTextureParameterCount, int32& OutOverridedScalarParameterCount) const {
}

FString USHFXDirtLayerSubcomp::GetDirtStateMaterialName(int32 DirtSetIndex) const {
    return TEXT("");
}

ESHFXDirtState USHFXDirtLayerSubcomp::GetDirtState(int32 DirtSetIndex) const {
    return ESHFXDirtState::Clean;
}

int32 USHFXDirtLayerSubcomp::GetDirtSetCount() const {
    return 0;
}

float USHFXDirtLayerSubcomp::GetDirtBlendLayerValue() const {
    return 0.0f;
}

bool USHFXDirtLayerSubcomp::CheckDynamicMaterialValid(int32 DirtSetIndex) const {
    return false;
}

void USHFXDirtLayerSubcomp::ChangeDirtBlendLayerAmount(float DeltaValue) {
}



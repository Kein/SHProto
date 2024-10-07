#include "SHFXNiagaraDecalComponent.h"

USHFXNiagaraDecalComponent::USHFXNiagaraDecalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyOwnerAfterFade = false;
    this->ErosionParameterName = TEXT("Opacity | Erosion | Step");
    this->FadeAwayTime = 30.00f;
    this->IsErosionEnabled = true;
    this->UseErosionInvert = false;
    this->DecalMaterialDynamic = NULL;
}

void USHFXNiagaraDecalComponent::SetInitialErode(const float InitialErode) {
}



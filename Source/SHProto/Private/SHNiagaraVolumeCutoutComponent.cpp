#include "SHNiagaraVolumeCutoutComponent.h"

USHNiagaraVolumeCutoutComponent::USHNiagaraVolumeCutoutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
}

void USHNiagaraVolumeCutoutComponent::SetCutOutDisabled(const bool IsDisable, const UObject* Object) {
}

bool USHNiagaraVolumeCutoutComponent::IsCutOutDisabledBy(const UObject* Object) const {
    return false;
}

bool USHNiagaraVolumeCutoutComponent::IsCutOutDisabled() const {
    return false;
}



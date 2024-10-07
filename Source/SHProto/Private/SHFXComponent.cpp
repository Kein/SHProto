#include "SHFXComponent.h"
#include "Templates/SubclassOf.h"

USHFXComponent::USHFXComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
}

bool USHFXComponent::IsInitialized() const {
    return false;
}

USHFXSubcomponent* USHFXComponent::FindSubcomponentByClass(const TSubclassOf<USHFXSubcomponent> SubcomponentClass) const {
    return NULL;
}



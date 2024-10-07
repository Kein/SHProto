#include "SHItemExecutiveBase.h"
#include "Components/SceneComponent.h"

ASHItemExecutiveBase::ASHItemExecutiveBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->OwnerCharacter = NULL;
    this->ItemContext = NULL;
}

void ASHItemExecutiveBase::RequestManualAbort() {
}


ASHItemBase* ASHItemExecutiveBase::GetItemContextActor() const {
    return NULL;
}



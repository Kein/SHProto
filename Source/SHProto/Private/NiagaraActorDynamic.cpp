#include "NiagaraActorDynamic.h"
#include "NiagaraDynamicComponent.h"

ANiagaraActorDynamic::ANiagaraActorDynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UNiagaraDynamicComponent>(TEXT("NiagaraDynamicComponent0"));
    this->NiagaraComponent = (UNiagaraDynamicComponent*)RootComponent;
}



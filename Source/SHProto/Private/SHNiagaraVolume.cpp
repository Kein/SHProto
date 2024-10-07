#include "SHNiagaraVolume.h"

ASHNiagaraVolume::ASHNiagaraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

bool ASHNiagaraVolume::IsPointWithin(FVector Point) const {
    return false;
}



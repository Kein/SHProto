#include "SHFreezingVolume.h"

ASHFreezingVolume::ASHFreezingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

bool ASHFreezingVolume::IsPointWithin(FVector Point) const {
    return false;
}



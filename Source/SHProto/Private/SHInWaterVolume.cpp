#include "SHInWaterVolume.h"

ASHInWaterVolume::ASHInWaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

bool ASHInWaterVolume::IsPointWithin(FVector Point) const {
    return false;
}



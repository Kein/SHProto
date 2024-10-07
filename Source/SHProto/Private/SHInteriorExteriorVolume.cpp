#include "SHInteriorExteriorVolume.h"

ASHInteriorExteriorVolume::ASHInteriorExteriorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Value = ESHInteriorExteriorStateEnum::Exterior;
}

bool ASHInteriorExteriorVolume::IsPointWithin(FVector Point) const {
    return false;
}



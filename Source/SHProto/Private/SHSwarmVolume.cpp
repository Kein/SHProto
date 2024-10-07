#include "SHSwarmVolume.h"

ASHSwarmVolume::ASHSwarmVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

void ASHSwarmVolume::SetColorShape(FColor ShapeColor, float Opacity, bool DisplayShadedVolume) {
}

bool ASHSwarmVolume::IsPointWithin(FVector Point) const {
    return false;
}



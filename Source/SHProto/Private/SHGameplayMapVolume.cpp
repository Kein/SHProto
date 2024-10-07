#include "SHGameplayMapVolume.h"

ASHGameplayMapVolume::ASHGameplayMapVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Map = ESHMapsEnum::None;
}



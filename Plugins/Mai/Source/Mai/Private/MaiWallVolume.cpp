#include "MaiWallVolume.h"
#include "MaiWallNavGenerator.h"

AMaiWallVolume::AMaiWallVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->WallMeshGen = CreateDefaultSubobject<UMaiWallNavGenerator>(TEXT("WallMeshGen"));
}

void AMaiWallVolume::RegenerateGraph() {
}



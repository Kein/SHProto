#include "MaiNodeGraphVolume.h"
#include "MaiNodeGraphComponent.h"

AMaiNodeGraphVolume::AMaiNodeGraphVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->NodeGraph = CreateDefaultSubobject<UMaiNodeGraphComponent>(TEXT("NodeGraph"));
}

void AMaiNodeGraphVolume::RegenerateGraph() {
}



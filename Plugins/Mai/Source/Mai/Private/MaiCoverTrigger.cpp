#include "MaiCoverTrigger.h"
#include "MaiCoverComponent.h"

AMaiCoverTrigger::AMaiCoverTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->_Cover = CreateDefaultSubobject<UMaiCoverComponent>(TEXT("MaiCover"));
    this->_FullCover = false;
}



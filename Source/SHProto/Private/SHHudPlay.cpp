#include "SHHudPlay.h"

ASHHudPlay::ASHHudPlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->bDrawPostDebug = true;
    this->bDrawDOFDebug = true;
    this->bDrawPlayerLocation = true;
}



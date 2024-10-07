#include "SHPlayerCameraManagerPlay.h"

ASHPlayerCameraManagerPlay::ASHPlayerCameraManagerPlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->ProbeChannel = ECC_WorldStatic;
    this->ProbeSize = 0.00f;
}



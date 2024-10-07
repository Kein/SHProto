#include "PostProcessAutoDOFCtrl.h"

UPostProcessAutoDOFCtrl::UPostProcessAutoDOFCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CollisionChannel = ECC_Camera;
    this->DOFFromPlayerPosition = false;
}

void UPostProcessAutoDOFCtrl::SetExternalDriver(bool State) {
}

void UPostProcessAutoDOFCtrl::SetExternalDepthValue(float DepthValue) {
}



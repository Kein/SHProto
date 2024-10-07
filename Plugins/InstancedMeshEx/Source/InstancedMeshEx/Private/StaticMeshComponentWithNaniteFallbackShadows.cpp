#include "StaticMeshComponentWithNaniteFallbackShadows.h"

UStaticMeshComponentWithNaniteFallbackShadows::UStaticMeshComponentWithNaniteFallbackShadows(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Fallback = NULL;
}



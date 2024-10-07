#include "SplineMeshExComponent.h"

USplineMeshExComponent::USplineMeshExComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->RandomSeed = -559039827;
    this->CastShadow = false;
    this->LightMapResolution = 64;
    this->Collision = ECollisionEnabled::NoCollision;
    this->CollisionChannel = ECC_WorldStatic;
    this->CanAffectNavigation = false;
    this->StretchSegment = false;
    this->GenerateSimplifiedCollision = true;
    this->CoalesceSides = false;
    this->CoalesceLimit = 4;
    this->ForceMipmapsResidency = false;
    this->PhysMaterialOverride = NULL;
    this->bRenderCustomDepth = false;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->CustomDepthStencilValue = 0;
}

void USplineMeshExComponent::SetVectorParameterValue(FName ParameterName, FLinearColor Value) {
}

void USplineMeshExComponent::SetScalarParameterValue(FName ParameterName, float Value) {
}

void USplineMeshExComponent::SetCustomDepthStencil(bool RenderCustomDepth, ERendererStencilMask DepthStencilWriteMask, int32 DepthStencilValue) {
}



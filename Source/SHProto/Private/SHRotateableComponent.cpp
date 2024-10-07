#include "SHRotateableComponent.h"

USHRotateableComponent::USHRotateableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MomentumDecreaser = 1.80f;
    this->MomentumLimit = 360.00f;
    this->ReceivedMoementumForceMod = 1.00f;
    this->HitThrottle = -1.00f;
    this->bDebug = false;
    this->RotateableMesh = NULL;
    this->PlaneSideDetectionComponent = NULL;
}

void USHRotateableComponent::RegisterComponents(UStaticMeshComponent* InRotateableMeshComponent, UPlaneSideDetectionComponent* InSHPlaneSideDetectionComponent) {
}

void USHRotateableComponent::OnActorHitApplyRotate(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}



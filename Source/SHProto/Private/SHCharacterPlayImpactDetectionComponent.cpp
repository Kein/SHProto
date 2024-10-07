#include "SHCharacterPlayImpactDetectionComponent.h"

USHCharacterPlayImpactDetectionComponent::USHCharacterPlayImpactDetectionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverlapTestMargin = 5.00f;
    this->MinHitHeightFraction = 0.20f;
    this->OwnerCharacter = NULL;
}

void USHCharacterPlayImpactDetectionComponent::SHDebug_Character_ImpactDetection_ValuesDebug() {
}

void USHCharacterPlayImpactDetectionComponent::SHDebug_Character_ImpactDetection_DrawDebug() {
}

void USHCharacterPlayImpactDetectionComponent::CreateHitEvent(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



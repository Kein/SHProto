#include "SHAkHookedMeatComponent.h"

USHAkHookedMeatComponent::USHAkHookedMeatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BurstAudioEvent = NULL;
    this->SwingAudioEvent = NULL;
    this->VelocityRTPC = NULL;
    this->bDebug = false;
}

void USHAkHookedMeatComponent::PlaySwingAudio() {
}

void USHAkHookedMeatComponent::PlayBurstAudioEvent() {
}

void USHAkHookedMeatComponent::OnSkeletalComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}



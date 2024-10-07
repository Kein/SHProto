#include "BlooberAkComponent.h"

UBlooberAkComponent::UBlooberAkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

int32 UBlooberAkComponent::SimplePostAssociatedAkEvent() {
    return 0;
}

int32 UBlooberAkComponent::SimplePostAkEvent(UAkAudioEvent* InEvent) {
    return 0;
}

void UBlooberAkComponent::EnableDynamicTick() {
}



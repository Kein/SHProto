#include "StreamingVolume.h"
#include "Components/BoxComponent.h"

AStreamingVolume::AStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->PreloadBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PreloadBox"));
    this->bEnablePreload = false;
    this->PreloadBox->SetupAttachment(RootComponent);
}

void AStreamingVolume::SetEnable(const bool Enable, const UObject* Object) {
}

bool AStreamingVolume::IsEnabled() const {
    return false;
}

UStreamingVolumeManager* AStreamingVolume::GetStreamingVolumeManager() {
    return NULL;
}



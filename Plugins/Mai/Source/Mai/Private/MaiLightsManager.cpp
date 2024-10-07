#include "MaiLightsManager.h"

UMaiLightsManager::UMaiLightsManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UMaiLightsManager::TestIsLit(AActor* observer, float Radius, float hheight, FVector Offset) const {
    return false;
}

void UMaiLightsManager::RefreshLighting() {
}

void UMaiLightsManager::OnLightObserverChange(UMaiLightObserver* observer) {
}

void UMaiLightsManager::OnLightEmitterChange(UMaiLightEmitter* Light) {
}

UMaiLightEmitter* UMaiLightsManager::GetLitLight(const UMaiLightObserver* observer) const {
    return NULL;
}

UMaiLightsManager* UMaiLightsManager::getLightsManager(const UObject* WorldContext) {
    return NULL;
}

bool UMaiLightsManager::GetIsLit(AActor* observer) const {
    return false;
}



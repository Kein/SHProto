#include "SHAsyncLoadRequestingComponent.h"
#include "Templates/SubclassOf.h"

USHAsyncLoadRequestingComponent::USHAsyncLoadRequestingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSkipReleaseAllAssetsOnEndPlay = false;
}

void USHAsyncLoadRequestingComponent::RequestAsyncLoadSet(TSet<TSoftObjectPtr<UObject>> SoftObjects, bool bKeepLoaded) {
}

void USHAsyncLoadRequestingComponent::RequestAsyncLoadAnimActionExe(const TSubclassOf<USHAnimActionExecutiveBase>& InAnimActionExeClass, bool bKeepLoaded) {
}

void USHAsyncLoadRequestingComponent::RequestAsyncLoad(TSoftObjectPtr<UObject> SoftObject, bool bKeepLoaded) {
}

void USHAsyncLoadRequestingComponent::ReleaseAsset(TSoftObjectPtr<UObject> SoftObject) {
}

void USHAsyncLoadRequestingComponent::ReleaseAllAssets() {
}

void USHAsyncLoadRequestingComponent::PreloadDialog(const FDialogTalkID& InDialogTalkID) {
}

void USHAsyncLoadRequestingComponent::PreloadCameraData(const FSHCameraAnimationData& InCameraData) {
}

void USHAsyncLoadRequestingComponent::PreloadAnimationData(const FPlayAnimationData& InAnimationData) {
}

void USHAsyncLoadRequestingComponent::PreloadAnimActionExecutive(const TSubclassOf<USHAnimActionExecutiveBase>& InAnimActionExeClass) {
}

bool USHAsyncLoadRequestingComponent::IsLoaded(const TSubclassOf<USHAnimActionExecutiveBase>& InAnimActionExeClass) const {
    return false;
}

UObject* USHAsyncLoadRequestingComponent::GetObject(TSoftObjectPtr<UObject> SoftObject, bool bShouldFallbackToSyncLoad) {
    return NULL;
}



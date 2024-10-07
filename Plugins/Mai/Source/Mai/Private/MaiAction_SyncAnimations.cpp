#include "MaiAction_SyncAnimations.h"
#include "Templates/SubclassOf.h"

UMaiAction_SyncAnimations::UMaiAction_SyncAnimations() {
    this->_SetBehaviorName = true;
    this->_PlayRate = 1.00f;
    this->_RotationMode = EMaiSyncRotationMode::TowardsTheOwner;
    this->_SnapOtherToOwner = false;
    this->_UseOtherRotation = false;
    this->_IgnoreOffset = false;
}

UAnimMontage* UMaiAction_SyncAnimations::PlayOwnerMontage() {
    return NULL;
}

UAnimMontage* UMaiAction_SyncAnimations::PlayOtherMontage() {
    return NULL;
}

UMaiAction_SyncAnimations* UMaiAction_SyncAnimations::createActionSyncFromRow(UObject* WorldContext, AActor* Other, const FDataTableRowHandle& row) {
    return NULL;
}

UMaiAction_SyncAnimations* UMaiAction_SyncAnimations::createActionSyncFromConfig(UObject* WorldContext, AActor* Other, const FMaiSyncActionConfig& Config, FName behaviorName) {
    return NULL;
}

UMaiAction_SyncAnimations* UMaiAction_SyncAnimations::createActionSyncAnimsSingle(UObject* WorldContextObject, FGameplayTag ownerAnimTag, FGameplayTag otherAnimTag, AActor* Other, TSubclassOf<UMaiAction_SyncAnimations> ActionClass, FName behaviorName, float PlayRate) {
    return NULL;
}

UMaiAction_SyncAnimations* UMaiAction_SyncAnimations::createActionSyncAnims(UObject* WorldContextObject, FGameplayTagContainer ownerAnimTags, FGameplayTagContainer otherAnimTags, AActor* Other, TSubclassOf<UMaiAction_SyncAnimations> ActionClass, FName behaviorName, float PlayRate) {
    return NULL;
}

void UMaiAction_SyncAnimations::CalculateIdealTransforms() {
}



#include "DaiAnimSet.h"

UDaiAnimSet::UDaiAnimSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UDaiAnimSet::InjectAnimsTag(FGameplayTag AnimSet, FGameplayTagContainer injection) {
}

void UDaiAnimSet::InjectAnimsList(FGameplayTag AnimSet, const TArray<FDaiAnimPlayParams>& injection) {
}

void UDaiAnimSet::InjectAnim(FGameplayTag AnimSet, const FDaiAnimPlayParams& injection) {
}

FDaiAnimPlayParams UDaiAnimSet::getRandomAnimParams(const TArray<FDaiAnimPlayParams>& playParams) {
    return FDaiAnimPlayParams{};
}

FDaiAnimPlayParams UDaiAnimSet::getBestAngleAnimParams(const TArray<FDaiAnimPlayParams>& playParams, float Angle) {
    return FDaiAnimPlayParams{};
}

UAnimationAsset* UDaiAnimSet::GetAnimByTag(FGameplayTagContainer Tags, FDaiAnimPlayParams& playParams) const {
    return NULL;
}

TArray<FDaiAnimPlayParams> UDaiAnimSet::GetAllAnimsByTag(FGameplayTagContainer Tags) const {
    return TArray<FDaiAnimPlayParams>();
}

void UDaiAnimSet::ClearInjection(FGameplayTag AnimSet) {
}



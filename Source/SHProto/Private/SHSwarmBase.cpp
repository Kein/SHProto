#include "SHSwarmBase.h"
#include "Components/SceneComponent.h"
#include "NiagaraComponent.h"
#include "SHSwarmBoundRegion.h"
#include "Templates/SubclassOf.h"

ASHSwarmBase::ASHSwarmBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->_NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraFX"));
    this->_MainBoundRegion = CreateDefaultSubobject<USHSwarmBoundRegion>(TEXT("BoundRegion_Main"));
    this->_FollowPointsRoot = CreateDefaultSubobject<USceneComponent>(TEXT("FollowPointsRoot"));
    this->CreeperLifetime = 60.00f;
    this->SpawnBurst = 0;
    this->SpawnRate = 100.00f;
    this->PreferMoveThanStand = 0.50f;
    this->BehaviourStateTime.AddDefaulted(5);
    this->BehaviourStateSpeed.AddDefaulted(5);
    this->BehaviourStateAngleCone.AddDefaulted(5);
    this->DestroyRegionsEnabled = false;
    this->RegionsFollowEnabled = false;
    this->RegionFollowIsGlobal = false;
    this->RegionFollowType = ESwarmFollowType::START_CLOSEST_FOLLOW_INDEX_ORDER;
    this->_FlashlightInfluenceEnabled = true;
    this->_UseCharacterFlashlightParams = true;
    this->_FlashlightConeInner = 7.00f;
    this->_FlashlightConeOuter = 15.00f;
    this->_FlashlightDistanceRange = 1500.00f;
    this->_FlashlightStrengthEffect = 100.00f;
    this->_GunshootRadius = 500.00f;
    this->_GunshootOriginTime = 0.35f;
    this->_GunshootStrength = 2000.00f;
    this->_GunshootFalloffExp = 0.30f;
    this->_ShowDebugInPlayMode = false;
    this->_CharacterPlay = NULL;
    this->_FlashlightPtr = NULL;
    this->_SwarmDisabled = false;
    this->_FollowPointsRoot->SetupAttachment(_NiagaraComp);
    this->_MainBoundRegion->SetupAttachment(_NiagaraComp);
    this->_NiagaraComp->SetupAttachment(RootComponent);
}

void ASHSwarmBase::UpdateStateTime(ESwarmCreeperState State, FVector2D Time) {
}

void ASHSwarmBase::UpdateStateSpeed(ESwarmCreeperState State, FVector2D Speed) {
}

void ASHSwarmBase::UpdateStateParameters() {
}

void ASHSwarmBase::UpdateStateAngleCone(ESwarmCreeperState State, float Angle) {
}

void ASHSwarmBase::ShowAllDebugRegions(bool isShow) {
}

void ASHSwarmBase::SetSwarmDisabled(bool IsDisable) {
}

void ASHSwarmBase::RefreshSpawnRegions() {
}

void ASHSwarmBase::RefreshRegionsSimply(const FName& RegionNiagaraName, const TSubclassOf<USHSwarmRegionBase> RegionClass) {
}

void ASHSwarmBase::RefreshRegions(const FName& RegionNiagaraName, const TSubclassOf<USHSwarmRegionBase> RegionClass) {
}

void ASHSwarmBase::RefreshReflectRegions() {
}

void ASHSwarmBase::RefreshFollowRegions() {
}

void ASHSwarmBase::RefreshFollowPoints() {
}

void ASHSwarmBase::RefreshDestroyRegions() {
}

void ASHSwarmBase::RefreshBoundRegions() {
}

void ASHSwarmBase::RefreshAllVariables() {
}

void ASHSwarmBase::RefreshAllRegions() {
}

void ASHSwarmBase::OnWeaponFireEffectImpl(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext) {
}




void ASHSwarmBase::InitializeSwarm() {
}

void ASHSwarmBase::GetValidRegions(TSubclassOf<USHSwarmRegionBase> RegionClass, TArray<USHSwarmRegionBase*>& OutComponents, bool RemoveDisabledRegions) {
}



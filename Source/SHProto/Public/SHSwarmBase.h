#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESwarmCreeperState.h"
#include "ESwarmFollowType.h"
#include "Templates/SubclassOf.h"
#include "SHSwarmBase.generated.h"

class ASHCharacterPlay;
class ASHFlashlight;
class ASHItemWeapon;
class UNiagaraComponent;
class USHRangedCmbSubcomp;
class USHSwarmBoundRegion;
class USHSwarmRegionBase;
class USceneComponent;

UCLASS()
class ASHSwarmBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    UNiagaraComponent* _NiagaraComp;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USHSwarmBoundRegion* _MainBoundRegion;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Instanced)
    USceneComponent* _FollowPointsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CreeperLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D CreeperSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SpawnBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpawnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D StartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PreferMoveThanStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVector2D> BehaviourStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<FVector2D> BehaviourStateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize)
    TArray<float> BehaviourStateAngleCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DestroyRegionsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RegionsFollowEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool RegionFollowIsGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESwarmFollowType RegionFollowType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FlashlightInfluenceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _UseCharacterFlashlightParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FlashlightConeInner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FlashlightConeOuter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FlashlightDistanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _FlashlightStrengthEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _GunshootRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _GunshootOriginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _GunshootStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _GunshootFalloffExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _ShowDebugInPlayMode;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* _CharacterPlay;
    
    UPROPERTY(Transient)
    ASHFlashlight* _FlashlightPtr;
    
    UPROPERTY(SaveGame)
    bool _SwarmDisabled;
    
public:
    ASHSwarmBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateStateTime(ESwarmCreeperState State, FVector2D Time);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStateSpeed(ESwarmCreeperState State, FVector2D Speed);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStateParameters();
    
    UFUNCTION(BlueprintCallable)
    void UpdateStateAngleCone(ESwarmCreeperState State, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void ShowAllDebugRegions(bool isShow);
    
    UFUNCTION(BlueprintCallable)
    void SetSwarmDisabled(bool IsDisable);
    
    UFUNCTION(BlueprintCallable)
    void RefreshSpawnRegions();
    
    UFUNCTION(BlueprintCallable)
    void RefreshRegionsSimply(const FName& RegionNiagaraName, const TSubclassOf<USHSwarmRegionBase> RegionClass);
    
    UFUNCTION(BlueprintCallable)
    void RefreshRegions(const FName& RegionNiagaraName, const TSubclassOf<USHSwarmRegionBase> RegionClass);
    
    UFUNCTION(BlueprintCallable)
    void RefreshReflectRegions();
    
    UFUNCTION(BlueprintCallable)
    void RefreshFollowRegions();
    
    UFUNCTION(BlueprintCallable)
    void RefreshFollowPoints();
    
    UFUNCTION(BlueprintCallable)
    void RefreshDestroyRegions();
    
    UFUNCTION(BlueprintCallable)
    void RefreshBoundRegions();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAllVariables();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAllRegions();
    
protected:
    UFUNCTION()
    void OnWeaponFireEffectImpl(USHRangedCmbSubcomp* RangedCombatSubcomponent, ASHItemWeapon* ItemWeaponContext);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWeaponFireEffect();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashlightOn();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlashlightOff();
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeSwarm();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetValidRegions(TSubclassOf<USHSwarmRegionBase> RegionClass, TArray<USHSwarmRegionBase*>& OutComponents, bool RemoveDisabledRegions);
    
};


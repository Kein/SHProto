#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/HitResult.h"
#include "SHSystemFXBase.generated.h"

class UAkAudioEvent;
class UDecalComponent;
class UMaterialInstanceDynamic;
class UNiagaraComponent;
class USHSystemFXData;
class USceneComponent;

UCLASS(Abstract)
class SHPROTO_API ASHSystemFXBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* ParticlesPivotPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* DecalPivotPoint;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UDecalComponent* DecalComponent;
    
    UPROPERTY(Transient)
    USHSystemFXData* AssignedSystemFXData;
    
    UPROPERTY(Transient)
    UAkAudioEvent* AkAudioEventOverride;
    
public:
    ASHSystemFXBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelfDestroyTimeValue(float InValue);
    
protected:
    UFUNCTION()
    void ProcessImpactFXFinished(UNiagaraComponent* InComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void PostAkEvent(UAkAudioEvent* InAudioAsset, bool InShouldStopPooledAkComponentOnEndPlay);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInit(const USHSystemFXData* InSystemFXData, const FHitResult InHit);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnImpactDecalApplied();
    
public:
    UFUNCTION(BlueprintPure)
    UNiagaraComponent* GetSpawnedNiagaraComponent() const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetDecalMaterialDynamic() const;
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Chaos/ChaosEngineInterface.h"
#include "EFoot.h"
#include "ESoundMovement.h"
#include "EVerticalStance.h"
#include "Footstep.h"
#include "FootstepEffect.h"
#include "Wading.h"
#include "BeingFootstep.generated.h"

class UDecalComponent;
class UMaterialInstanceDynamic;
class UObject;
class USceneComponent;

UCLASS(Abstract, Transient)
class BEING_API ABeingFootstep : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    bool _AllowPutFootstepWithoutSpawn;
    
    UPROPERTY(EditDefaultsOnly)
    UObject* _DefaultFootstep;
    
    UPROPERTY(EditDefaultsOnly)
    UObject* _ClothesSound;
    
    UPROPERTY(EditDefaultsOnly)
    FFootstepEffect _ClothesEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, FFootstep> _Footsteps;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<TEnumAsByte<EPhysicalSurface>, FWading> _WadingSounds;
    
    UPROPERTY(EditDefaultsOnly)
    float _MaxSoundLife;
    
    UPROPERTY(BlueprintReadOnly)
    FHitResult _SurfaceHit;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPhysicalSurface> _SurfaceType;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPhysicalSurface> _SurfaceTypeAlter;
    
    UPROPERTY(BlueprintReadOnly)
    TEnumAsByte<EPhysicalSurface> _SurfaceTypeDecal;
    
    UPROPERTY(BlueprintReadOnly)
    EFoot _Foot;
    
    UPROPERTY(BlueprintReadOnly)
    ESoundMovement _Movement;
    
    UPROPERTY(BlueprintReadOnly)
    EVerticalStance _VerticalStance;
    
    UPROPERTY(BlueprintReadOnly)
    int32 _FallHeight;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    USceneComponent* _SoundAttachToComponent;
    
    UPROPERTY(BlueprintReadOnly)
    FName _SoundAttachToSlot;
    
    UPROPERTY(BlueprintReadOnly)
    bool _ShowEffect;
    
    UPROPERTY(BlueprintReadOnly)
    float _DecalInitialAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    float _MovementSpeed;
    
    UPROPERTY(BlueprintReadOnly)
    float _StanceAINoiseMod;
    
    UPROPERTY(BlueprintReadOnly)
    float _VolumeMul;
    
    UPROPERTY(EditDefaultsOnly)
    float _OcclusionRefreshInterval;
    
    UPROPERTY(EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> _OcclusionCollisionChannel;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UDecalComponent* _DecalComponent;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _EffectDecalMID;
    
public:
    ABeingFootstep(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartEffect(const FFootstepEffect& effect);
    
    UFUNCTION()
    void PutFootstep();
    
    UFUNCTION(BlueprintPure)
    float GetFootstepAINoise() const;
    
};


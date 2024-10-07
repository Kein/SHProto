#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EffectHandle.h"
#include "ESHCombatPoseType.h"
#include "PlayAnimationData.h"
#include "SHCameraDataFull.h"
#include "SHCameraFOVBlendData.h"
#include "SHItemWeapon.h"
#include "SHMovementDataStruct.h"
#include "SHWeaponRangedPointingData.h"
#include "Templates/SubclassOf.h"
#include "SHItemWeaponRanged.generated.h"

class UAnimationAsset;
class UCameraShakeBase;
class UCurveFloat;
class UCurveVector;
class UForceFeedbackEffect;
class USHCameraPostProcessConfig;
class USHFirearmBaseDamage;

UCLASS(Abstract)
class SHPROTO_API ASHItemWeaponRanged : public ASHItemWeapon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RequiredCameraBlendAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle WeaponAmmoItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 WeaponClipSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ReloadAmmoAddedPerNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseCustomInitalAmmoInWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 CustomInitalAmmoInWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<USHFirearmBaseDamage> damageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* DamageFalloffCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocusGainSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeaponFocusAfterShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetFocusOnViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewRotationToResetFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockGainFocusOnViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewRotationToBlockGainFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bResetFocusOnMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementValueToResetFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bBlockGainFocusOnMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementValueToBlockGainFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bLoseFocusOnMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementValueToLoseFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MovementLoseFocusSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UCurveVector*> RecoilCurves;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SpreadUnfocusedMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SpreadUnfocusedMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SpreadFocusedMax;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SpreadFocusedMin;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 NumberOfTracesPerShoot;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseCircleUniformSpread;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxShootDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimationAsset> FireWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimationAsset> FireNoAmmoWeaponAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimationAsset> ReloadWeaponAnim;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AutoAimMaxRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UCurveFloat* AutoAimRangeToStrengthMappingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterRotationInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CharacterControlRotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHMovementDataStruct AimMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseReloadMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHMovementDataStruct ReloadMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayAnimationData FireAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPlayAnimationData FireNoAmmoAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESHCombatPoseType, FPlayAnimationData> ReloadAnimsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCameraDataFull DefaultAimCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESHCombatPoseType, FSHCameraDataFull> PosesAimCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHCameraFOVBlendData AimCameraFOVData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USHCameraPostProcessConfig> AimCameraPostProcessConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShakeBase> AimCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UCameraShakeBase> FireCameraShake;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnFire;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnOutOfAmmo;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    UPROPERTY(Transient)
    UCameraShakeBase* PlayingAimCameraShake;
    
    UPROPERTY(Transient)
    UCameraShakeBase* PlayingFireCameraShake;
    
    UPROPERTY(Transient)
    UCurveVector* RecoilCurveToUse;
    
public:
    ASHItemWeaponRanged(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FSHWeaponRangedPointingData TracePerfectForPointingData(bool bForceRefresh);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShellEjected();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnOutOfAmmoPerformed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFireSpreadPerformed(const TArray<FVector>& ShootsHitLoc);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFirePerformed(const FVector ShootEndWorldLoc);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFireReady() const;
    
    UFUNCTION(BlueprintPure)
    bool HasWeaponAmmoInInventory() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyAmmoInClip() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetStartTraceLoc() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSpreadShootVector(const FVector2D SpreadAngles) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetRandomEndTraceLoc() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPerfectShootVector() const;
    
    UFUNCTION(BlueprintPure)
    float GetFocusValue() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEndTraceLoc(const float ShootAngle, const FVector2D SpreadAngles) const;
    
    UFUNCTION(BlueprintPure)
    FSHWeaponRangedPointingData GetCachedPerfectTraceCachedData() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void DrawAimDetailedDebug(float DeltaTime);
    
public:
    UFUNCTION(BlueprintPure)
    bool CanBeReloaded() const;
    
};


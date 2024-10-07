#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHItemEquipable.h"
#include "SHMakeNoiseConfig.h"
#include "SHWeaponMovementSet.h"
#include "SHItemWeapon.generated.h"

class ASHSystemFXBase;
class UAkAudioEvent;
class UCurveFloat;
class UObject;
class USHAkItemWeaponBaseAudioComponent;
class USHSystemFXDataMappings;
class USHWeaponAnimInstance;

UCLASS(Abstract)
class SHPROTO_API ASHItemWeapon : public ASHItemEquipable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkItemWeaponBaseAudioComponent* WeaponItemAudioComponent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D DamageRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoUnequipTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AutoUnequipTimeInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<USHWeaponAnimInstance> MeshAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TargetingMinViewDotProduct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* TargetingAngleScoreCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* TargetingDistanceScoreCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bUseWeaponMovementSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHWeaponMovementSet WeaponMovementSet;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AlternativeEquipAttachSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AlternativeEquipRelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector AlternativeEquipRelativeRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USHSystemFXDataMappings> TraceHitFXMappings;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<ASHSystemFXBase> TraceHitFXSpawnerClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> HitFXSpawnerAkAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHMakeNoiseConfig HitNoiseConfig;
    
public:
    ASHItemWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetMeshHidden(const bool InWantHidden, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsMeshHidden() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEnabledAnyDebug() const;
    
};


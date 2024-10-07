#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ESHCombatInputModeEnum.h"
#include "ESHCombatPoseType.h"
#include "PlayAnimationData.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayCombatComponent.generated.h"

class ASHCharacterPlay;
class UDamageType;
class UObject;
class USHCharacterPlayCombatComponent;
class USHCombatSubcomponentBase;
class USHDefenceCmbSubcompSettings;
class USHEnemiesManageCmbSubcompSettings;
class USHRangedAutoAimCmbSubcompSettings;
class USHStressCmbSubcompSettings;
class USHStruggleCmbSubcompSettings;
class USHWeaponManageCmbSubcompSettings;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayCombatComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSHCombatEvent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHCombatComponentEvent, USHCharacterPlayCombatComponent*, ComponentPtr);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FSHCombatEvent ReceiveDamageEvent;
    
    UPROPERTY(BlueprintAssignable)
    FSHCombatEvent CombatInputModeChangedEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> ProjectileCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHWeaponManageCmbSubcompSettings* WeaponManageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHEnemiesManageCmbSubcompSettings* EnemiesManageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHDefenceCmbSubcompSettings* DefenceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHStruggleCmbSubcompSettings* StruggleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHRangedAutoAimCmbSubcompSettings* RangedAutoAimSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHStressCmbSubcompSettings* StressSettings;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TSet<USHCombatSubcomponentBase*> OwnedSubcomponents;
    
public:
    USHCharacterPlayCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SynchroReceiveDamage(const UObject* Object, const FPlayAnimationData AnimData);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Combat_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Combat_DrawSecondaryTargetsDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Combat_DrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Combat_ActionsDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetAllCombatBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    float ReceiveDamage(float DamageValue, const UObject* Object, FVector HitDirection, const TSubclassOf<UDamageType> DamageType);
    
    UFUNCTION(BlueprintPure)
    bool IsAllCombatBlocked() const;
    
    UFUNCTION(BlueprintCallable)
    void InteruptCombat();
    
    UFUNCTION(BlueprintPure)
    bool GetDrawDebug() const;
    
    UFUNCTION(BlueprintPure)
    ESHCombatPoseType GetCombatPose() const;
    
    UFUNCTION(BlueprintPure)
    ESHCombatInputModeEnum GetCombatInputMode() const;
    
    UFUNCTION(BlueprintPure)
    USHCombatSubcomponentBase* FindSubcomponentByClass(const TSubclassOf<USHCombatSubcomponentBase> SubcomponentClass) const;
    
};


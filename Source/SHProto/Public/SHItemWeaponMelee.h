#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "SHCharacterPlayAttackStruct.h"
#include "SHItemWeapon.h"
#include "SHItemWeaponMelee.generated.h"

class AActor;
class ACharacter;
class ASHCameraAnimationExecutive;
class ASHItemWeaponMelee;
class UDataTable;
class UForceFeedbackEffect;

UCLASS(Abstract)
class SHPROTO_API ASHItemWeaponMelee : public ASHItemWeapon {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHItemWeaponMeleeWithContextEvent, ASHItemWeaponMelee*, WeaponPtr, AActor*, ActorContext);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* MeleeAttacksDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UDataTable* MeleeSecondaryAttacksDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GroundAttackMaxViewPitch;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float StandingBehindRequiredDotProduct;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    UPROPERTY(Transient)
    ASHCameraAnimationExecutive* CameraAnimExe;
    
public:
    ASHItemWeaponMelee(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WillKillCharacter(ACharacter* CheckedCharacter) const;
    
    UFUNCTION(BlueprintPure)
    bool SlideDistanceCheck(ACharacter* CheckedCharacter, float MaxSlideDistance) const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseGroundAttack() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeleeAttackStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeleeAttackInterupted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeleeAttackFinished();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMeleeAttackAnyCharacter();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboWindowSuccess();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboWindowOpened();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnComboWindowFailed();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOwnerStandingBehind(ACharacter* CheckedCharacter) const;
    
    UFUNCTION(BlueprintPure)
    FString GetLastUsedAttack() const;
    
    UFUNCTION(BlueprintPure)
    ACharacter* GetCurrentMeleeAttackEnemyTarget() const;
    
    UFUNCTION(BlueprintPure)
    FSHCharacterPlayAttackStruct GetAttackDataCopy(FName AttackRowName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    FString CalcAttackRowName(ACharacter* AttackCandidate);
    
};


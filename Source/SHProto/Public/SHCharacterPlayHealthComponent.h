#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ESHHealthStateEnum.h"
#include "SHDynamicPostProcessHandler.h"
#include "SHMaterialPropertyControlHandler.h"
#include "SHCharacterPlayHealthComponent.generated.h"

class ASHCharacterPlay;
class ASHPlayerDeathVolume;
class UCameraShakeBase;
class UObject;
class USHCharacterPlayHealthComponent;
class USHCharacterPlayHealthSettings;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSHHealthValueChangedDetailedEvent, USHCharacterPlayHealthComponent*, Component, float, ChangeDelta, float, OldValue, float, NewValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHHealthComponentEvent, USHCharacterPlayHealthComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHCharacterPlayHealthSettings* Settings;
    
    UPROPERTY(BlueprintAssignable)
    FSHHealthComponentEvent OnHealthStateChangedBlueprintEvent;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    TArray<ASHPlayerDeathVolume*> PlayerDeathVolumes;
    
    UPROPERTY(Transient)
    TArray<FSHMaterialPropertyControlHandler> HealthMaterialPropertyControlsHandlers;
    
    UPROPERTY(Transient)
    TArray<FSHDynamicPostProcessHandler> DynamicPostProcessHandlers;
    
    UPROPERTY(Transient)
    UCameraShakeBase* PlayingSprintCameraShake;
    
    UPROPERTY(SaveGame)
    float HealthValue;
    
public:
    USHCharacterPlayHealthComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void UpdateControllerLights();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_NotEverybodyHurts();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_GodMode();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_FakeHeal(int32 Value);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_FakeDamage(int32 Value);
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_DrawHitpointsDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_DisableReceiveDamageEffects();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_DeathSequence_Debug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Health_CantTouchThis();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetDeathSequenceBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    float ReceiveHeal(float InHealValue, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    float ReceiveDamage(float DamageValue, const UObject* Object, bool bRequireCriticalnjuryState);
    
    UFUNCTION(BlueprintCallable)
    bool PlayDeathSequenceRequest(UObject* InSlayer, const FVector& InHitWorldDirection);
    
    UFUNCTION(BlueprintPure)
    bool IsDeathSequenceBlocked() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthValue() const;
    
    UFUNCTION(BlueprintPure)
    ESHHealthStateEnum GetHealthState() const;
    
};


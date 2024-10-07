#pragma once
#include "CoreMinimal.h"
#include "SHAkItemWeaponBaseAudioComponent.h"
#include "SHAkItemWeaponRangedAudioComponent.generated.h"

class UAkAudioEvent;
class USHAkCharacterAudioComponent;
class USHCharacterPlayCombatComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkItemWeaponRangedAudioComponent : public USHAkItemWeaponBaseAudioComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ShootAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* OutOfAmmoAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* ReloadAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* AimStartActionAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* FireReadyAimStopActionAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkAudioEvent* StopAnimAudioNotifiesAudioEvent_Reload;
    
    UPROPERTY(Instanced, Transient)
    USHAkCharacterAudioComponent* CharacterAudioComponent;
    
public:
    USHAkItemWeaponRangedAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessOwnerCharacterCombatInputModeChanged(USHCharacterPlayCombatComponent* CombatComp);
    
};


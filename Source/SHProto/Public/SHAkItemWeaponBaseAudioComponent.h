#pragma once
#include "CoreMinimal.h"
#include "SHAkComponent.h"
#include "SHAkItemWeaponBaseAudioComponent.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkItemWeaponBaseAudioComponent : public USHAkComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAkSwitchValue* WeaponSwitch;
    
public:
    USHAkItemWeaponBaseAudioComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintBeforeUnequip();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintAfterEquip();
    
};


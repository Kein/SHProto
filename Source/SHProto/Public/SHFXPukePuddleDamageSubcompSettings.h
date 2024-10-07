#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXPukePuddleDamageSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHFXPukePuddleDamageSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnablePukeDamage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PukePuddleDamageCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableFootstepDamageBlock;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FootstepDamageBlockCooldown;
    
    USHFXPukePuddleDamageSubcompSettings();

};


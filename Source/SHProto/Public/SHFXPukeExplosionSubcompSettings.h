#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaiFloatDiff.h"
#include "EffectHandle.h"
#include "Templates/SubclassOf.h"
#include "SHFXPukeExplosionSubcompSettings.generated.h"

class ASHSystemFXBase;
class UDamageType;
class UNiagaraSystem;
class USHSystemFXData;

UCLASS(BlueprintType)
class SHPROTO_API USHFXPukeExplosionSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHSystemFXData* PukePuddleFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHSystemFXBase> PukePuddleFXSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PukePuddleDelaySpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMaiFloatDiff PukeExplosionDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PukeExplosionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PukeExplosionDamageDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> PukeExplosionDamageType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* PukeExplosionParticles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PukeExplosionSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    USHFXPukeExplosionSubcompSettings();

};


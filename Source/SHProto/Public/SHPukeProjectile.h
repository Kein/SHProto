#pragma once
#include "CoreMinimal.h"
#include "SHProjectile.h"
#include "Templates/SubclassOf.h"
#include "SHPukeProjectile.generated.h"

class ASHSystemFXBase;
class UDamageType;
class USHSystemFXData;

UCLASS()
class ASHPukeProjectile : public ASHProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHSystemFXData* PukePuddleFXData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHSystemFXBase> PukePuddleFXSpawnerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DecalOrderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PuddleSizeModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _PuddleMinSizeActivation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UDamageType> DamageType;
    
    ASHPukeProjectile(const FObjectInitializer& ObjectInitializer);

};


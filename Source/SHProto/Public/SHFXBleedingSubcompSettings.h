#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXBleedingSubcompSettings.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class SHPROTO_API USHFXBleedingSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableBleeding;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BleedingShowBelowHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BleedingDelaySpawnWhenMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BleedingDelaySpawnWhenMinHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BleedingDistanceToCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UNiagaraSystem* BleedingParticleTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BleedingRootSocketName;
    
    USHFXBleedingSubcompSettings();

};


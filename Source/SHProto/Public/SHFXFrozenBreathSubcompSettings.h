#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXFrozenBreathSubcompSettings.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class SHPROTO_API USHFXFrozenBreathSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableFrozenBreath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UNiagaraSystem> FrozenBreathTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FrozenBreathSocketName;
    
    USHFXFrozenBreathSubcompSettings();

};


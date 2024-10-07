#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "EffectHandle.h"
#include "SHStruggleCmbSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHStruggleCmbSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator LookAtOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LookAtDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle SpecialEffectStruggle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle SpecialEffectStruggleWin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle SpecialEffectStruggleLose;
    
    USHStruggleCmbSubcompSettings();

};


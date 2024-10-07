#pragma once
#include "CoreMinimal.h"
#include "BlooberAkSpatialAudioVolume.h"
#include "ESHAudioCubatureEnum.h"
#include "ESHAudioWorldEnum.h"
#include "SHAkSpatialAudioVolume.generated.h"

UCLASS()
class SHPROTO_API ASHAkSpatialAudioVolume : public ABlooberAkSpatialAudioVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHAudioCubatureEnum IndoorOutdoorState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ESHAudioWorldEnum AudioWorldState;
    
public:
    ASHAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

};


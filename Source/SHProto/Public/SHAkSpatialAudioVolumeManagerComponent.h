#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHAkSpatialAudioVolumeManagerComponent.generated.h"

class ASHAkSpatialAudioVolume;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkSpatialAudioVolumeManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHAkSpatialAudioVolume*> RegisteredAkSpatialAudioVolumes;
    
public:
    USHAkSpatialAudioVolumeManagerComponent(const FObjectInitializer& ObjectInitializer);

};


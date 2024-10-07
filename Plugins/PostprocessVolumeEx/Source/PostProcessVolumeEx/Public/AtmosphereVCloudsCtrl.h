#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtmosphereVCloudsCtrl.generated.h"

class UVolumeTexture;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POSTPROCESSVOLUMEEX_API UAtmosphereVCloudsCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVolumeTexture* DefaultVolume;
    
    UAtmosphereVCloudsCtrl(const FObjectInitializer& ObjectInitializer);

};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MaiNoiseSilencerVolume.generated.h"

class UMaiNoiseSilencerComponent;

UCLASS()
class MAI_API AMaiNoiseSilencerVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMaiNoiseSilencerComponent* NoiseSilencer;
    
    AMaiNoiseSilencerVolume(const FObjectInitializer& ObjectInitializer);

};


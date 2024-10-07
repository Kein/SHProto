#pragma once
#include "CoreMinimal.h"
#include "BlooberAkAmbientSound.h"
#include "SHAkAmbientSound.generated.h"

UCLASS()
class SHPROTO_API ASHAkAmbientSound : public ABlooberAkAmbientSound {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    bool bEnableSoundCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay)
    float SoundCullDistance;
    
public:
    ASHAkAmbientSound(const FObjectInitializer& ObjectInitializer);

};


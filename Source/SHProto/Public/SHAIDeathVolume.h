#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHAIDeathVolume.generated.h"

UCLASS()
class SHPROTO_API ASHAIDeathVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 _VolumePriority;
    
public:
    ASHAIDeathVolume(const FObjectInitializer& ObjectInitializer);

};


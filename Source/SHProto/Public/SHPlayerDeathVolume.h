#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHPlayerDeathVolume.generated.h"

UCLASS()
class SHPROTO_API ASHPlayerDeathVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 VolumePriority;
    
public:
    ASHPlayerDeathVolume(const FObjectInitializer& ObjectInitializer);

};


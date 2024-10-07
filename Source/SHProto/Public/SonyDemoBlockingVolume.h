#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SonyDemoBlockingVolume.generated.h"

UCLASS(Config=Engine)
class SHPROTO_API ASonyDemoBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float Proximity;
    
    UPROPERTY(BlueprintReadOnly, Config, EditAnywhere)
    int32 MessageIndex;
    
    ASonyDemoBlockingVolume(const FObjectInitializer& ObjectInitializer);

};


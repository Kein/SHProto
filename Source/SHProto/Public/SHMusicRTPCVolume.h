#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHMusicRTPCVolume.generated.h"

class UAkRtpc;
class UObject;

UCLASS()
class SHPROTO_API ASHMusicRTPCVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSoftObjectPtr<UAkRtpc>, float> RTPCParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabledOnBegin;
    
public:
    ASHMusicRTPCVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const UObject* Enabler, bool InEnabled);
    
};


#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHMusicSwitchVolume.generated.h"

class UAkSwitchValue;
class UObject;

UCLASS()
class SHPROTO_API ASHMusicSwitchVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> MusicSwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetMusicSwitchOnLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> OnLeaveMusicSwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabledOnBegin;
    
public:
    ASHMusicSwitchVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const UObject* Enabler, bool InEnabled);
    
};


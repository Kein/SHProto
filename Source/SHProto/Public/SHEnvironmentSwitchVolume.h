#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "SHEnvironmentSwitchVolume.generated.h"

class UAkSwitchValue;
class UObject;

UCLASS()
class SHPROTO_API ASHEnvironmentSwitchVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> EnvironmentSwitchValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSetEnviromentNoneSwitchOnLeave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsEnabledOnBegin;
    
public:
    ASHEnvironmentSwitchVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const UObject* Enabler, bool InEnabled);
    
};

